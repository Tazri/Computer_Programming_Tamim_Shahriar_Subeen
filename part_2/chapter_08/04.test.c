#include <stdio.h>
#include "dimik.h" // custom header folder

int main(){
    int n1 = 10, n2 = 5;

    printf("%d + %d = %d\n",n1,n2,add(n1,n2));
    printf("%d x %d = %d\n",n1,n2,mul(n1,n2));
    return 0;
}

/*
Output :
10 + 5 = 15
10 x 5 = 50

dimik.h file contians : 
int add(int n1,int n2){
    return n1 + n2;
}

int mul(int n1,int n2){
    return n1 *n2;
}
*/