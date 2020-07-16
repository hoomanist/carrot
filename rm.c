#include <stdio.h>

int 
main(int argc, char **argv)
{
	if(argc <= 1)
	{
		fprintf(stderr, "usage : %s filename[s]...\n", argv[0]);
		return 1;
	}
	
	for(int i = 1; i < argc; i++)
		if(remove(argv[i]) == -1)
			fprintf(stderr, "oops something went wrong.");
	return 0;
}

