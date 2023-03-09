#include <stdio.h>

int main(){
    char c = 'A';
    char *p,**q;

    p = &c;
    q = &p;

    printf("Value of c : %c\n",c);
    printf("Value of c by *p : %c\n",*p);
    printf("Value of c by **q : %c\n",**q);
    return 0;
}

/*
Output : 
Value of c : A
Value of c by *p : A
Value of c by **q : A
*/