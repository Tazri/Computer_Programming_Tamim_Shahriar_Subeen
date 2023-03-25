#include <stdio.h>

int main(){
    int i, size = 7;
    int ara[] = {1,2,3,4,1,2,3};
    int result = ara[0];

    for(i =1;i < size;i++){
        result ^= ara[i];
    }

    printf("Result = %d\n",result);
    return 0;
}

/*
Output : 
Result = 4
*/