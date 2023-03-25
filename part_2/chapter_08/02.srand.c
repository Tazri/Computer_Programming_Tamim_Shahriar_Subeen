#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    time_t t;

    // srand mean seed which set the seed. 
    // rand function generate the number beased on seed
    srand(0);

    for(int i = 0;i < 5;i++){
        printf("%d\n",rand());
    }
    return 0;
}

/*
First Round Output : 
1804289383
846930886
1681692777
1714636915
1957747793

Second Round Output : 
1804289383
846930886
1681692777
1714636915
1957747793
*/