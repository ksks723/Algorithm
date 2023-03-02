#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int ps(char *s, char *arg)
{
    while(*s)
        write(2,s++,1);
    if(arg)
        while(*arg)
            write(2,arg++,1);
    return (1);
}

int ex(char **av, int i, int tmp_fd, char **env)
{
    av[i] =0;
    dup2(tmp_fd,0);
    close(tmp_fd);
    execve(av[0],av,env);
    return (ps("err",av[0]));
}

int main(int ac, char **av, char **env)
{
    int i=0;
    int tmp_fd = dup(0);
    int fd[2];
    (void) ac;
    while(av[i] && av[i+1])
    {
        av = &av[i+1];
        i=0;
        while(av[i] && strcmp(av[i] , "|") && strcmp(av[i],";"))
        i++;
        if(strcmp(av[0],"cd")==0)
        {
            if(i != 2)
                ps("err",0);
            else if(chdir(av[1]) != 0)
                ps("err to",av[1]);
        }
        else if(i!=0 && (av[i] ==0 || strcmp(av[i],";")==0))
        {
            if(fork()==0)
            {
                if(ex(av,i, tmp_fd,env))
                    return (1);
            }
            else
            {
                close(tmp_fd);
                while(waitpid(-1,0,WUNTRACED)!= -1)
                ;
                tmp_fd = dup(0);
            }
        }
        else if(i != 0 && (strcmp(av[i],"|")==0))
        {
            pipe(fd);
            if(fork() == 0)
            {
                dup2(fd[1],1);
                close(fd[0]);
                close(fd[1]);
                if(ex(av,i, tmp_fd,env))
                    return (1);
            }
            else 
            {
                close(tmp_fd);
                close(fd[1]);
                tmp_fd = fd[0];
            }
        }
    }
    close(tmp_fd);
    return (0);
}