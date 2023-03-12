#include <stdio.h>

int sum(int n){
    if(n < 0){
        return 0;
    }

    return n+sum(n-1);
}

int main(){
    int n,s;
    printf("> Enter the number : ");
    scanf("%d",&n);
    getchar();

    s = sum(n);

    printf("> Sum of 1 to %d is : %d\n",n,s);
    return 0;
}

/*
Output : 
> Enter the number : 100
> Sum of 1 to 100 is : 5050
*/