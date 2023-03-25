#include <stdio.h>

enum COLOR {NO_COLOR = 0,RED = 40,GREEN = 44, BLUE = 60};

int main(){

    printf("value NO_COLOR : %d\n",NO_COLOR);
    printf("value RED : %d\n",RED);
    printf("value GREEN : %d\n",GREEN);
    printf("value BLUE : %d\n",BLUE);

    return 0;
}

/*
value NO_COLOR : 0
value RED : 40
value GREEN : 44
value BLUE : 60
*/