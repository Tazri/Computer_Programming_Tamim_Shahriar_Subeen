#include <stdio.h>

int x = 1;

void myfnc(int y){
    y = y *2;
    x = x + 10; // this x is global function x
    printf("myfnc, x = %d, y = %d\n",x,y);
}

int main(){
    int y = 5;
    x = 10;
    myfnc(5);

    printf("main, x = %d, y = %d\n",x,y);
    return 0;
}

/*
Output : 
myfnc, x = 20, y = 10
main, x = 20, y = 5
*/