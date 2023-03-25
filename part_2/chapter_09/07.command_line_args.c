#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n1,n2,sum;

    n1 = atoi(argv[1]); // convert string to a integer.
    n2 = atoi(argv[2]);  // convert string to a integer.

    sum = n1 + n2;
    printf("%d + %d = %d\n",n1,n2,sum);
    return 0;
}

/*
run > ./exe/07.command_line_args.bin 4 5

Output :
> 4 + 5 = 9
*/