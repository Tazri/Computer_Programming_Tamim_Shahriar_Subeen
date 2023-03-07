#include <stdio.h>

void print_char(char c,int n){
    int i;
    for(i = 0;i < n;i++){
        printf("%c",c);
    }
}

int main(){
    int i,j,k;

    for(i= 11,j=0;i > 0;i-=2,j++){ // upper part
        print_char(' ',j);
        print_char('c',i);
        printf("\n");
    }

    for(i=3,j-=2;i <= 11;i+=2,j--){
        print_char(' ',j);
        print_char('c',i);
        printf("\n");
    }


    return 0;
}

/*
The ouptut : 
ccccccccccc
 ccccccccc
  ccccccc
   ccccc
    ccc
     c
    ccc
   ccccc
  ccccccc
 ccccccccc
ccccccccccc
*/