#include <stdio.h>

int main(){
    char ara[100];

    while(NULL != gets(ara)){
        printf("%s\n",ara);
    }

    return 0;
}

/*
Hello I am brea
Hello I am brea
do you know me ?
do you know me ?
wow it work
wow it work
*/