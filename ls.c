/** 


carrot unix commands :)

unix "ls" implemention in c 

**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <limits.h>

void list(char dirc[PATH_MAX])
{

	
    	DIR *d;
    	struct dirent *dir;
    	d = opendir(dirc);
    	if (d)
    	{
        	while ((dir = readdir(d)) != NULL)
        	{
            		printf("%s\n", dir->d_name);
        	}
        	closedir(d);
    	}

}

int main(int argc, char **argv)
{
	if(argc == 1){
		printf("this part is not implemented yet \n");
		return 0;
	}
	else if( argc > 2 ) {
      		printf("Too many arguments supplied.\n");
   		return 0;
	}
	
	char directory[PATH_MAX];
	strcpy(directory, argv[1]);
	list(directory);
}
