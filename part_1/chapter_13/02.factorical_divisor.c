#include <stdio.h>
#include <math.h>

#define false 0
#define true 1
#define SIZE 101
#define TOTAL_PRIME 25
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
    return map[n] != -1;
}

void print_array(int arr[],int size){
    int i;
    for(i = 0;i < size;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
}

int main(){
    int i,j;
    int map[SIZE];
    int all_prime[TOTAL_PRIME];

    seive(map,SIZE);

    for(i = 0,j = 0;i < SIZE;i++){
        if(map[i] == 0){
            all_prime[j++] = i;
        }
    }

    print_array(all_prime,TOTAL_PRIME);
}