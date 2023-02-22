#include <stdio.h>
#include <math.h>

int is_prime(int n){
    int i, root;

    if(n < 2){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    if(n %2 == 0){
        return 0;
    }

    root = sqrt(n);

    for(i = 3;i <= root;i = i + 2){
        if(n%i == 0){
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
output : 
Please enter a number : 8
8 is a not prime number.
Please enter a number : 5
5 is a prime number.
Please enter a number : 2147483647
2147483647 is a prime number.
Please enter a number : 0
*/