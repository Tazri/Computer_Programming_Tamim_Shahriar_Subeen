#include <stdio.h>

int main(){
    int ara[10] = {
        10, 20, 30, 40, 50, 60, 70, 80, 90, 100
    };
    int i;

    for(i = 0; i < 10;i++){
        printf("%dth element is: %d\n",i+1,ara[i]);
    }
    return 0;
}

/*
Output : 
1th element is: 10
2th element is: 20
3th element is: 30
4th element is: 40
5th element is: 50
6th element is: 60
7th element is: 70
8th element is: 80
9th element is: 90
10th element is: 100
*/