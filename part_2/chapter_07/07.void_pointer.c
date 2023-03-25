#include <stdio.h>

int main(){
    void *vp;
    int n = 10;
    
    vp = &n;

    printf("Address of n : %p\n",&n);
    printf("Value of vp : %p\n",vp);
    printf("Content of vp : %d\n",*((int *)vp));
    return 0;
}

/*
output : 
Address of n : 0x7fffa40d37f4
Value of vp : 0x7fffa40d37f4
Content of vp : 10
*/