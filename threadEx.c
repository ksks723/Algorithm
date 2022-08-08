#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/time.h>

#define C_NRML "\033[0m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"

pthread_mutex_t 		mutex_lock; // 뮤텍스 객체 선언
struct timeval			start, now;
int						share = 0;

void	*thread(void *vargp);

int	main(void)
{
	pthread_t				tid[3];
	void					*ret1;

	int num[3] = {1, 2, 3};
	gettimeofday(&start, NULL);
	pthread_mutex_init(&mutex_lock, NULL);

	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] 스레드 1이 생성됨.%s\n", C_YLLW, now.tv_usec - start.tv_usec, C_NRML);
	pthread_create(&tid[0], NULL, thread, &num[0]);

	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] 스레드 2가 생성됨.%s\n", C_YLLW, now.tv_usec - start.tv_usec, C_NRML);
	pthread_create(&tid[1], NULL, thread, &num[1]);
	
	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] 스레드 3이 생성됨.%s\n", C_YLLW, now.tv_usec - start.tv_usec, C_NRML);
	pthread_create(&tid[2], NULL, thread, &num[2]);

	for (int i = 1 ; i <= 10; i++)
	{
		gettimeofday(&now, NULL);
		printf("%s[ %3.d μs ] main : 반복문 동작중. -%2.d/10%s\n", C_NRML, now.tv_usec - start.tv_usec, i, C_NRML);
		usleep(1);
	}
	
	pthread_join(tid[0], &ret1);
	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] main : 스레드 1 joined. ( 반환 값 : %d )%s\n", C_NRML, now.tv_usec - start.tv_usec, *(int *)ret1, C_NRML);
	
	pthread_join(tid[1], &ret1);
	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] main : 스레드 2 joined. ( 반환 값 : %d )%s\n", C_NRML, now.tv_usec - start.tv_usec, *(int *)ret1, C_NRML);
	
	pthread_join(tid[2], &ret1);
	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] main : 스레드 3 joined. ( 반환 값 : %d )%s\n", C_NRML, now.tv_usec - start.tv_usec, *(int *)ret1, C_NRML);
	
	exit(0);
}

/* justify thread routine */
void	*thread(void *vargp)
{
	char *color;
	switch (*(int *)vargp)
	{
		case 1: color = C_BLUE;	break;	
		case 2:	color = C_RED;	break;	
		case 3:	color = C_GREN;	break;	
	}

	pthread_mutex_lock(&mutex_lock);

	for (int i = 1 ; i <= 3; i++)
	{

		gettimeofday(&now, NULL);
		printf("%s[ %3.d μs ] 스레드 %d이(가) sleep 없이 동작중 -%2.d/3%s\n", color, now.tv_usec - start.tv_usec, *(int *)vargp, i, C_NRML);
	}
	
	// 스레드 동작 권한 넘김
	// usleep(1);

	for (int i = 1 ; i <= 5; i++)
	{
		gettimeofday(&now, NULL);
		printf("%s[ %3.d μs ] 스레드 %d이(가) 1μs 간격으로 동작중 -%2.d/5%s\n", color, now.tv_usec - start.tv_usec, *(int *)vargp, i, C_NRML);
		// usleep(1);
		
	}
	pthread_mutex_unlock(&mutex_lock);
	
	return (vargp);
}
/*
	// 공유 데이터
	share++;
	gettimeofday(&now, NULL);
	printf("%s[ %3.d μs ] 스레드 %d에서 공유 데이터 값 변경 : %d%s\n", color, now.tv_usec - start.tv_usec, *(int *)vargp, share, C_NRML);
*/