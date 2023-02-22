#include <stdio.h>

int is_prime(int n){
    int i;

    if(n < 2){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    if(n %2 == 0){
        return 0;
    }

    for(i = 3;i <= n/2 ; i = i + 2){
        if(n&i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;


    while(1){
        printf("Please enter a number : ");
        scanf("%d",&n);
        
        if(n == 0){
            break;
        }

        if(is_prime(n)){
            printf("%d is a prime number.\n",n);
        }else{
            printf("%d is a not prime number.\n",n);
        }


    }
}

/*
Output : 
Please enter a number : 2147483647
2147483647 is a prime number.
Please enter a number : 4
4 is a not prime number.
Please enter a number : 5
5 is a prime number.
Please enter a number : 0
*/