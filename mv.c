#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char **argv)
{
	int c;
	FILE *fp;
	FILE *dest;

	fp = fopen(argv[1], "r");
	dest = fopen(argv[2], "w");
	if(fp == NULL) {
                perror("Error in opening file");
        } do {
                c = fgetc(fp);
                if( feof(fp) ) {
                        break ;
                }
                fputc(c, dest);
        } while(1);
        fclose(fp);
	int delete = remove(argv[1]);
	if (!delete)
		return 0;
	else
		printf("permission denied ! \n");

}
