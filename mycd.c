#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX 200

int main(int argc, char *argv[])
{
	char buf[MAX];

	if(argc <1)
	{
		fprintf(stderr, "Usage : ./cd 경로명\n");
		exit(1);
	}

	if(chdir(argv[1])==0)
	{
		getcwd(buf,MAX);
		printf("Path : %s\n", buf);
		chdir(argv[1]);
	}

	else
	{
		fprintf(stderr, "bash: %s: %s: 그런 파일이나 디렉터리가 없습니다\n",argv[0],argv[1]);
	}
}
