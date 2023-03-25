#include <stdio.h>

int add(int a,int b){ return a + b; };
int sub(int a,int b){ return a - b; };

int operate(int (*op)(int,int),int a,int b){
    return op(a,b);
}

int main(){
    printf("operate(add,10,5) : %d\n",operate(add,10,5));
    printf("operate(&sub,10,5) : %d\n",operate(&sub,10,5));
    return 0;
}

/*
output : 
operate(add,10,5) : 15
operate(&sub,10,5) : 5
*/