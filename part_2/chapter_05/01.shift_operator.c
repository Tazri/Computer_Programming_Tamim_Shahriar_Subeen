#include <stdio.h>

int main(){
    int n,x,m;

    while(1){
        printf("Please enter your number (0 to exit) : ");
        scanf("%d",&n);

        if(!n){
            break;
        }

        printf("How many bits you want to shift left and right ? ");
        scanf("%d",&x);

        m = n << x;
        printf("> %d << %d = %d\n",n,x,m);

        m = n >> x;
        printf("> %d >> %d = %d\n",n,x,m);

    }
    return 0;
}

/*
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 1
> 9 << 1 = 18
> 9 >> 1 = 4
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 3
> 9 << 3 = 72
> 9 >> 3 = 1
Please enter your number (0 to exit) : 9
How many bits you want to shift left and right ? 2
> 9 << 2 = 36
> 9 >> 2 = 2
Please enter your number (0 to exit) : 0
*/