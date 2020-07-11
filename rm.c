#include <stdio.h>


int 
main(int argc, char **argv)
{
	if(argc > 2)
	{
		printf("wtf you want of me :/ \n");
		return 0;
	}
	else if(argc == 1)
	{
		printf("input a thing :/ \n");
		return 0;
	}
	int delete = remove(argv[1]);
	if(!delete)
		printf("ok that is removed \n");
	else
		printf("sorry a problem is here :) \n");
	return 0;
	



}
