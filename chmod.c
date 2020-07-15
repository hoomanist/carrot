#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	mode_t perm;                                                                                                                           
        perm = strtol(argv[2], 0, 8);                 
        int ch = chmod(argv[1], perm);                                                                                                                  
	if (!ch){
		printf("works \n");
		return 0;
	}
	else{
	printf("not work \n");
	return -1;
	}
}
