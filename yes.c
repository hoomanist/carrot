#include <stdio.h>
#include <string.h>
#include <limits.h>

int 
main(int argc, char **argv)
{
	char msg[CHAR_MAX] ;
	if (argc == 1)
		strcpy(msg, "yes");
	else if (argc > 2)
		return 0;
	else if (argc == 2)
		strcpy(msg, argv[1]);
	for(;;){
		printf("%s\n", msg);
	}

}
