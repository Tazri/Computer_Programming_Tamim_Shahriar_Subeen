#include <stdio.h>

int main(){
    double n, sum;

    printf("Enter the n : ");
    scanf("%lf",&n);

    sum = (n*(n+1))/2;

    printf("Sum : %0.0lf\n",sum);

    return 0;
}

/*
Output : 
Enter the n : 1000
Sum : 500500
*/