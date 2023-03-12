#include <stdio.h>

int f_calls = 0;

int factorial(int n){
    f_calls++;

    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;

    scanf("%d",&n);

    if(n < 0){
        printf("Undefined\n");
        return 0;
    }

    printf("Factorial of %d is %d\n",n,factorial(n));

    printf("Number of function calls : %d\n",f_calls);

    return 0;
}

/*
Output : 
5
Factorial of 5 is 120
Number of function calls : 6
*/