#include <stdio.h>

int main(int argc,char *argv[]){
    printf("Argument count : %d\n",argc);
    printf("First argument : %s\n",argv[0]);
    return 0;
}

/*
Output :
Argument count : 1
First argument : ./exe/09.command_line.bin
*/