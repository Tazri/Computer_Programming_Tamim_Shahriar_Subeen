#include <stdio.h>

int main(){
    int ara[5] = {50,60,70,80,90};

    printf("Value of array : %d, %d, %d, %d, %d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);
    printf("Address of ara is %p\n",&ara);
    printf("Addres of ara[0] is %p\n",&ara[0]);
    printf("Addres of ara[1] is %p\n",&ara[1]);
    printf("Addres of ara[2] is %p\n",&ara[2]);
    printf("Addres of ara[3] is %p\n",&ara[3]);
    printf("Addres of ara[4] is %p\n",&ara[4]);

    return 0;
}

/*
Output : 
Value of array : 50, 60, 70, 80, 90
Address of ara is 0x7ffcec1a7d60
Addres of ara[0] is 0x7ffcec1a7d60
Addres of ara[1] is 0x7ffcec1a7d64
Addres of ara[2] is 0x7ffcec1a7d68
Addres of ara[3] is 0x7ffcec1a7d6c
Addres of ara[4] is 0x7ffcec1a7d70
*/