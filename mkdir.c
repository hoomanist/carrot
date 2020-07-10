#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 1){
		printf("what do you want? \n");
		return 0;
	}
	else if(argc > 2){
		printf("how many arguments :/ \n");
		return 0;
	}
	struct stat st = {0};
	if(stat(argv[1], &st) == -1)
	{
		mkdir(argv[1], 0700);
	}
	return 0;
}
