#include <stdio.h>
#include <math.h>

#define false 0
#define true 1
#define SIZE 131
#define TOTAL_PRIME 31
typedef short bool;

void seive(int map[],int size){
    // first 0 and 1 is not prime that's why they -1
    if(size == 1){
        map[0] = -1;
    }else if(size == 2){
        map[0] = -1;
        map[1] = -1;
    }else{
        int i,j;
        int root_size = (int) sqrt((double)size) + 1;
        map[0] = -1;
        map[1] = -1;
        map[2] = 0; // assum that 2 is prime

        // changing
        for(i = 3;i <size;i++){
            map[i] = i & 1 ? 0 : -1;
        }

        for(i = 3;i <= root_size;i+=2){
            for(j = 3;i *j < size;j+=2){
                map[i*j] = -1;
            }
        }
    }
}

bool is_prime(int map[],int n){
    return !(map[n] == -1);
}

void print_array(int arr[],int size){
    int i;
    for(i = 0;i < size;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
}

void count_prime(int n,int map[],int all_prime[]){
    int i = 0;
    int number = n;
    if(number > 1){
        while (!is_prime(map,number) && i < TOTAL_PRIME)
        {
            if(number % all_prime[i] == 0){
                map[all_prime[i]]++;
                number = number / all_prime[i];
            }else{
                i++;
            }
        }
        
        map[number]++;
    }
}

void print_counting(int map[],int all_prime[]){
    int i;
    bool is_first = true;

    for(i = 0;i < TOTAL_PRIME;i++){
        if(map[all_prime[i]]){
            if(is_first){
                printf("(%d,%d)",all_prime[i],map[all_prime[i]]);
            }else{
                printf(", (%d,%d)",all_prime[i],map[all_prime[i]]);
            }

            if(is_first){
                is_first = false;
            }
        }
    }
}

void clear_map(int map[],int all_prime[]){
    int i;

    for(i = 0;i < TOTAL_PRIME;i++){
        map[all_prime[i]] = 0;
    }
}

int main(){
    int i,j;
    int map[SIZE];
    int all_prime[TOTAL_PRIME];
    int n;
    seive(map,SIZE);

    // storing prime
    for(i = 0,j=0;i < SIZE;i++){
        if(map[i] == 0){
            all_prime[j++] = i;
        }
    }

    
    printf("> Enter any negative number to terminate <\n");
    printf("> Please enter number less then %d\n",SIZE-1);
    while (true)
    {
        printf("Enter the number : ");
        scanf("%d",&n);

        if(n < 0){
            printf(">> Program Terminate <<\n");
            break;
        }else if(n == 0 || n == 1){
            printf("> There is a no prime for %d!\n\n",n);
            continue;
        }else if(n > SIZE-1){
            printf("> %d is of the range, range is 0 to %d\n\n",n,SIZE-1);
        }

        for(i = 2;i <= n;i++){
            count_prime(i,map,all_prime);
        }

        printf("%d! = ",n);
        print_counting(map,all_prime);
        clear_map(map,all_prime);
        printf("\n\n");
    }
    
}

/*
Output : 
> Enter any negative number to terminate <
> Please enter number less then 130
Enter the number : 4
4! = (2,3), (3,1)

Enter the number : 5
5! = (2,3), (3,1), (5,1)

Enter the number : 100
100! = (2,97), (3,48), (5,24), (7,16), (11,9), (13,7), (17,5), (19,5), (23,4), (29,3), (31,3), (37,2), (41,2), (43,2), (47,2), (53,1), (59,1), (61,1), (67,1), (71,1), (73,1), (79,1), (83,1), (89,1), (97,1)

Enter the number : -1
>> Program Terminate <<
*/