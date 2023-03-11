/*
Before run this program,
the file must be exist,
'./text/in.txt' where contain : 
ABCDEFGHIJKL
MNOPQRST
UVWX
YZ
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("./text/in.txt","r");
    if(fp == NULL){
        perror("> Can't open file <");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);
    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);

    fseek(fp,0,0);
    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);

    fclose(fp);

    return 0;    
}

/*
Output : 
> ch : A
> ch : B
> ch : A
*/