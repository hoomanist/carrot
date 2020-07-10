/** 
carrot unix commands :)
unix "cat" simple version
**/


#include <stdio.h>
#include <limits.h>
#include <string.h>

void show(char path[PATH_MAX])
{
	printf("%s\n", path);
	int c;
	FILE *fp;
	fp = fopen(path, "r");
	if(fp == NULL) {
      		perror("Error in opening file");
   	} do {
      		c = fgetc(fp);
      		if( feof(fp) ) {
         		break ;
      		}
      		printf("%c", c);
   	} while(1);
	fclose(fp);

}

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("what the f#@& :/");
		return 0;
	}
	else if(argc > 2){
		printf("remember the simplicity");
		return 0;
	}

	show(argv[1]);	
	return 0;
}
