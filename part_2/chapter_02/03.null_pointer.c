#include <stdio.h>

int main(){
    int x = 100;
    int *p = NULL;

    printf("Value of x : %d \n",x);
    
    // below line produce 'Segmentation fault'
    // beacuse p is null pointer
    printf("Value of *p : %d\n",*p);
}