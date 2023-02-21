#include <stdio.h>

void test_fucntion(int ara[]){
    ara[0] = 100;
}

int main(){
    int ara [] = {1,2,3,4,5};

    printf("ara[0] : %d\n",ara[0]);
    test_fucntion(ara);
    printf("ara[0] : %d\n",ara[0]);
    return 0;
}

/*
Output : 
ara[0] : 1
ara[0] : 100
*/