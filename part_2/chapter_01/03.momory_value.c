#include <stdio.h>

int main(){
    char ch1 = 'A', ch2 = 'B';
    int n1 = 100, n2 = 1000000;

    printf("Value of ch1 = %c,\t",ch1);
    printf("Address of ch1 = %p\n",&ch1);

    printf("Value of ch2 = %c,\t",ch2);
    printf("Address of ch2 = %p\n",&ch2);

    printf("Value of n1 = %d,\t",n1);
    printf("Address of n1 = %p\n",&n1);

    printf("Value of n2 = %d,\t",n2);
    printf("Address of n2 = %p\n",&n2);

    return 0;
}

/*
Output : 
Value of ch1 = A,       Address of ch1 = 0x7fff3b7f629f
Value of ch2 = B,       Address of ch2 = 0x7fff3b7f629e
Value of n1 = 100,      Address of n1 = 0x7fff3b7f6298
Value of n2 = 1000000,  Address of n2 = 0x7fff3b7f6294
*/