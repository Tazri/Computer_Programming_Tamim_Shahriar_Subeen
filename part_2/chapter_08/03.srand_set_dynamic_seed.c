#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time(&t));

    for(int i = 0;i < 5;i++){
        printf("%d\n",rand());
    }

    return 0;
}

/*
first round output : : 
182246839
1680750275
783398342
974255588
772408036

second round output : 
400751784
1495018759
1348789689
294246613
1666674472
*/