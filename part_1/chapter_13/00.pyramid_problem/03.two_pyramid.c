#include <stdio.h>

void print_char(char c,int n){
    int i;
    for(i = 0;i < n;i++){
        printf("%c",c);
    }
}

int main(){
    int i,j;

    for(i = 1,j=18;i<= 10;i++,j-=2){
        print_char('c',i);
        print_char(' ',j);
        print_char('c',i);
        printf("\n");
    }
}

/*
c                  c
cc                cc
ccc              ccc
cccc            cccc
ccccc          ccccc
cccccc        cccccc
ccccccc      ccccccc
cccccccc    cccccccc
ccccccccc  ccccccccc
cccccccccccccccccccc
*/