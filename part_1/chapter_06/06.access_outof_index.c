#include <stdio.h>

int main(){
    int ara[5] = {6, 7, 4, 6, 9};

    printf("%d\n",ara[-1]); // garbage value
    printf("%d\n",ara[5]); // garbage value
    printf("%d\n",ara[100]); // garbage value

    return 0;
}

/*
0
32765
2048029679
*/