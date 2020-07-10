
/**

unix commands implementation :)
unix "cd"

**/

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		chdir("~");
		return 0;
	}
	else if(argc > 2)
	{
		puts("this is simplest implemention");
		return 0;
	}
	chdir(argv[1]);


}
