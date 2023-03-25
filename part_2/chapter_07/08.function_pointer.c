#include <stdio.h>

int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n1,int n2){
    return n1 - n2;
}

int main(){
    // function pointer
    int (*fnc)(int,int);
    int n1 = 10,n2 = 20;
    
    fnc = &add;

    printf("Result : %d\n",fnc(n1,n2));
    
    fnc = &sub;
    printf("Result : %d\n",fnc(n1,n2));

    return 0;
}

/*
Output : 
Result : 30
Result : -10
*/