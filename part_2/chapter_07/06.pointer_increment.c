#include <stdio.h>

int main(){
    char *p, a = 10;
    int *q,b = 'F';
    double *r,c = 302.64;

    p = &a;
    q = &b;
    r = &c;

    printf("Size of char : %d byte\n",sizeof(char));
    printf("p : %p\n",p);
    printf("p+1 : %p\n",p+1);
    printf("P+2 : %p\n",p+2);

    printf("Size of int : %d byte\n",sizeof(int));
    printf("q : %p\n",q);
    printf("q+1 : %p\n",q+1);
    printf("q+2 : %p\n",q+2);


    printf("Size of double : %d byte\n",sizeof(double));
    printf("r : %p\n",r);
    printf("r+1 : %p\n",r+1);
    printf("r+2 : %p\n",r+2);

    return 0;
}

/*
Output : 
Size of char : 1 byte
p : 0x7fff8f48b6c7
p+1 : 0x7fff8f48b6c8
P+2 : 0x7fff8f48b6c9
Size of int : 4 byte
q : 0x7fff8f48b6c0
q+1 : 0x7fff8f48b6c4
q+2 : 0x7fff8f48b6c8
Size of double : 8 byte
r : 0x7fff8f48b6b8
r+1 : 0x7fff8f48b6c0
r+2 : 0x7fff8f48b6c8
*/