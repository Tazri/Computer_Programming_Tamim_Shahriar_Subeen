#include <stdio.h>

int main(){
    int x =10;
    int *p;
    p = &x;

    printf("Value of x : %d\n",x);

    *p = 20; // chaning value by pointer

    printf("Value of x : %d\n",x);
    printf("Address of x : %p\n",&x);
    printf("Value of p : %p\n",p);

    return 0;
}

/*
Value of x : 10
Value of x : 20
Address of x : 0x7ffd4be51d74
Value of p : 0x7ffd4be51d74
*/