#include <stdio.h>

int main(int argc,char *argv[]){
    if(argc != 2){
        printf("Please enter one argument (your name) \n");
        return 1;
    }

    printf("Welcome %s\n",argv[1]);
    return 0;
}

/*
run :
> ./exe/08.command_line.bin

output :
Please enter one argument (your name)

run : 
> ./exe/08.command_line.bin Anonymo

output : 
Welcome Anonymo
*/