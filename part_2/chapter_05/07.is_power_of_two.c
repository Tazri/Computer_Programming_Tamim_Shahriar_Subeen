#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n > 0 && (n & (n-1)) == 0){
        printf("%d is a power of 2\n",n);
    }else{
        printf("%d is Not power of 2\n",n);
    }
    return 0;
}

/*
Output sample one :
128
128 is a power of 2

Output sample two : 
129
129 is Not power of 2
*/