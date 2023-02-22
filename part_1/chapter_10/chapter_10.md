Chapter 10: Prime Number
=========================

Here is simple program to identify the a number is prime or not : 
```c
#include <stdio.h>

int is_prime(int n){
    int i;

    if(n < 2){
        return 0;
    }

    for(i = 2;i < n;i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n ;

    while(1){
        printf("Please enter a number : ");
        scanf("%d",&n);

        if(n == 0){
            break;
        }

        if(1 == is_prime(n)){
            printf("%d is a prime number.\n",n);
        }else{
            printf("%d is not a prime number.\n",n);
        }
    }
    
    return 0;
}

/*
Output : 
Please enter a number : 5
5 is a prime number.
Please enter a number : 13
13 is a prime number.
Please enter a number : 8
8 is not a prime number.
Please enter a number : 0
*/
```

Do same thing with better way : 
```c
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
```

Here more efficiency do find a number is prime or not : 
```c
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
```

## Sieve of Eratosthenes
Seive of Eratosthenes is a algorithm to find the prime number in a range. Here algorithm : 

1. First take a **n** size array. Set every element value to **1**.
2. check every element is 1 for every element. If yes then go next.
3. Multiply that's number by 2 to m, set value to 0 for index of array is result of multiply number. Mean's that's not prime number.m value is like that, multiply of number and m is always less than or equal to n.

Implementation of sieve of eratosthenes : 
```c
#include <stdio.h>
#include <math.h>

int ara[40];
int size = 40;

void print_ara(){
    int i;

    for(i = 2;i < size;i++){
        printf("%4d",ara[i]);
    }

    printf("\n");


    for(i = 2; i < size;i++){
        printf("----");
    }

    printf("\n");

    for(i = 2;i < size;i++){
        printf("%4d",i);
    }

    printf("\n\n\n");
}

void sieve(){
    int i,j,root;

    for(i = 2;i < size;i++){
        ara[i] = 1;
    }

    root = sqrt(size);
    print_ara();

    for(i = 2;i <= root;i++){
        if(ara[i] == 1){
            for(j = 2; i *j <= size;j++){
                ara[i*j] = 0;
            }
            print_ara();
        }
    }
}

int is_prime(int n){
    int i;
    if(n< 2){
        return 0;
    }

    return ara[n];
}

int main(){
    int n,m;

    sieve();

    while(1){
        printf("Please enter a number (enter 0 to exit) : ");
        scanf("%d",&n);

        if(n == 0){
            break;
        }


        if(n >= size){
            printf("The number should be less than %d\n",size);
            continue;
        }

        if(1 == is_prime(n)){
            printf("%d is a prime number.\n",n);
        }else{
            printf("%d is not a prime number.\n",n);
        }
    }

    return 0;
}
```

[< Chapter 09: string ](./../chapter_09/chapter_09.md) | [Part 1](./../part_1.md) | [Chapter 11: Array Again >](./../chapter_11/chapter_11.md)
-----------------------------------