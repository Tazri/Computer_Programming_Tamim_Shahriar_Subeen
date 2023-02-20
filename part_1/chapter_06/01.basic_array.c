#include <stdio.h>

int main(){
    int my_ara[10];

    printf("%d\n",my_ara[0]); // garbage value
    printf("%d\n",my_ara[9]); // garbage value

    return 0;
}

/*
0
32764
*/