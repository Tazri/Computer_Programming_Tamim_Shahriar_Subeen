#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n&1){ // if odd then it return 1 otherwise return 0
        printf("%d is odd\n",n);
    }else{
        printf("%d is even\n",n);
    }
    return 0;
}

/*
Output : 
15
15 is odd
*/