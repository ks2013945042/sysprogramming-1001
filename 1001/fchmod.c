#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc, char *argv[])
{
	long strtol();
	int newmode;
	newmode = (int)strtol(argv[1], (char **)NULL, 8);
	if(chmod(argv[2], newmode) == -1)
	{
		perror(argv[2]);
		exit(1);
	}
	exit(0);
}
