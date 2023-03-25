#include <stdio.h>

enum COLOR {
    NO_COLOR,
    RED,
    GREEN,
    BLUE
};

int main(){
    printf("value NO_COLOR : %d\n",NO_COLOR);
    printf("value RED : %d\n",RED);
    printf("value GREEN : %d\n",GREEN);
    printf("value BLUE : %d\n",BLUE);
}

/*
Output : 
value NO_COLOR : 0
value RED : 1
value GREEN : 2
value BLUE : 3
*/