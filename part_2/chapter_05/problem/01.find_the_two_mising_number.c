#include <stdio.h>

void missing_number(int arr[],int n,int *x,int *y){
    int i;
    int x_xor_y;
    int match_xor_arr,match_xor;
    int unmatch_bit_rightmost;
    *x = 0;
    *y = 0;

    x_xor_y = n ^ (n-1);
    for(i = 1; i <= n-2;i++){
        x_xor_y ^= i^arr[i-1];
    }

    // shortcut way to find unmatch_bit_rightmost below
    // unmatch_bit_rightmost = x_xor_y & ~(x_xor_y-1);

    // long way to find unmatch_bit_rightmost below
    unmatch_bit_rightmost = 1;
    i = x_xor_y;
    while(i){
        if(i&1) break;
        unmatch_bit_rightmost <<= 1;
        i >>= 1;
    }
    // figure out the x
    match_xor_arr = arr[0];
    for(i = 1;i < n-2;i++){
        if(arr[i] & unmatch_bit_rightmost){
            match_xor_arr ^= arr[i];
        }
    }

    match_xor = 1;
    for(i = 2;i <=n;i++){
        if(i & unmatch_bit_rightmost){
            match_xor^= i;
        }
    }
    *x = match_xor ^ match_xor_arr;
    *y = x_xor_y ^ (*x); 
}

int main(){
    int arr[] = {1,2,5,4,6,7,10,8};
    int size = 10;
    int x,y;
    missing_number(arr,size,&x,&y);

    printf("> x : %d\n",x);
    printf("> y : %d\n",y);
    return 0;
}