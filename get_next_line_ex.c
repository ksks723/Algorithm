
#include "get_next_line.h"

int __get_nl_idx(char *s) //개행 문자 인덱스 반환 , 없으면 -1
{
    int i;
    const int s_len = ft_strlen(s);

    i = 0;
    while (i < s_len)
    {
        if (s[i] == '\n')
            return (i);
        i++;
    }
    return (-1);
}

char *__free(char **backup, char **buf) //백업 변수나, 버퍼를 프리해준다. 누수방지.
{
    if (*backup)
        free(*backup);
    if (*buf)
        free(*buf);
    return (NULL);
}

char *__split(char **backup, int nl_idx)
{
    char *line;
    char *temp;
    const int len = ft_strlen(*backup);

    temp = *backup; //백업의 주소를 옮겨준다.
    if (nl_idx == -1)
    {
        line = ft_substr(*backup, 0, len);
        *backup = ft_substr("", 0, 0);
        /*
        개행이 없을경우 ex) "123"
        이라면 line은  "123"
        backup은 ""
        */
    }
    else
    {
        line = ft_substr(*backup, 0, nl_idx + 1);                     // 0부터 nl_idx(2)+1 = 3 더  읽어서 주소반환  == "12\n"
        *backup = ft_substr(*backup, nl_idx + 1, len - (nl_idx + 1)); //아까읽은 3 부터 len(4) - (nl_idx + 1)(3) =1   3부터 1더 읽어라
        /*
        개행이 있을경우 ex) "12/n3"
        이라면 line은  "12\n"
        backup은 "3"
        */
    }
    free(temp); //기존 백업의 주소 프리!
    return (line);
}

int __join(char **backup, char *buf, int read_cnt)
{
    char *temp; //임시저장소

    if (*backup == NULL) //처음 이걸 실행할때 선언만 한 상태니까 *backup은 널
    {
        *backup = ft_substr("", 0, 0); //backup(b) 에다가 "" 을 넣어준다.
        if (!(*backup))                //잘 안됐을경우 널가드
            return (-2);
    }
    temp = *backup;                     //백업 주소를 템프에 넘겨준다.
    *(buf + read_cnt) = '\0';           //문자열처리를 해준다.
    *backup = ft_strjoin(*backup, buf); // 백업에 버프를 붙여준뒤 주소반환. "" + "123\0"
    free(temp);                         //기존 백업주소 프리! 누수방지
    if (!*backup)                       //82번 코드가 잘 되지 않았을때 가드
        return (-2);
    return (__get_nl_idx(*backup)); //개행 인덱스 리턴해준다.
}

char *get_next_line(int fd)
{
    static char *b; //읽어온뒤 개행까지 라인에 담고 리턴하지 않은 남은 부분 저장소
    char *buf;      //읽어온거 임시저장
    int read_cnt;   //읽어온 바이트 수
    int nl_idx;     //개행 인덱스

    if (fd < 0)
        return (NULL);                     //파일디스크립터 음수일때 가드
    buf = (char *)malloc(BUFFER_SIZE + 1); //버퍼사이즈 + 1 의 이유는 버퍼사이즈 + \n의 크기
    if (buf == NULL)                       //널 가드
        return (NULL);
    read_cnt = read(fd, buf, BUFFER_SIZE);                                   //fd(파일) 에서 버퍼사이즈 만큼 읽어서 buf에 저장해라.
    if (read_cnt < 0 || (read_cnt == 0 && (b == NULL || ft_strlen(b) == 0))) //읽어온게 없거나 , 저장소도 끝이라면 프리!
        return (__free(&b, &buf));
    nl_idx = __join(&b, buf, read_cnt); //개행 인덱스를 가져온다. 개행이 없을때는 -2
    while (nl_idx == -1)                //개행 인덱스가 생기면 빠져나감
    {
        if (read_cnt == 0) //개행도 없고, 읽어온것도 없다면 끝난거니까 break;
            break;
        read_cnt = read(fd, buf, BUFFER_SIZE); //개행이 나올때까지 버퍼사이즈만큼 계속 읽어온다.
        nl_idx = __join(&b, buf, read_cnt);    //개행 인덱스 반환
    }
    if (nl_idx == -2)              //개행이 없다면
        return (__free(&b, &buf)); //프리
    free(buf);                     //사용한 buf를 프리해준다.
    return (__split(&b, nl_idx));  //line 리턴해주고, back_up에는 개행뒤의 애들이 담겨있게된다.
}

//스테틱 함수인이유는 이 파일안에서만 사용가능하게 됨. 함수이름들도 네임컨벤션에 맞게 하신거임