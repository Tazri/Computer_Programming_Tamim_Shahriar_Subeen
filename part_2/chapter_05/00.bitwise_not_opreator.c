#include <stdio.h>

int main(){
    int a,b;

    a = 0;
    b = ~a;

    printf("a = %d, b = %d\n",a,b);

    a = 1;
    b = ~a;
    printf("a = %d, b = %d\n",a,b);
    return 0;
}

/*
a = 0, b = -1
a = 1, b = -2
*/