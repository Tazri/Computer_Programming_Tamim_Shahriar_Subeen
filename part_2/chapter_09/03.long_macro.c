#include <stdio.h>

// long macro
#define SWAP(a,b) { \
    a ^= b; \
    b ^= a; \
    a ^= b; \
}

int main(){
    int a = 83, b = 323;

    printf("a =  %d, b = %d\n",a,b);
    SWAP(a,b);
    printf("a = %d,b = %d\n",a,b);

    return 0;
}

/*
write multiline macro then use "\" at the end of every line.
*/