#include <stdio.h>

int
main(int argc, char **argv)
{

        if(argc < 2){
                fprintf(stderr, "usage:%s file[s]\n", argv[0]);
                return 1;
        }

        for(int i = 1; i < argc; i++)
                if(remove(argv[i]) == -1)
                        fprintf(stderr, "oOps something went wrong\n");
        /*TODO : use errno*/
        return 0;
}

