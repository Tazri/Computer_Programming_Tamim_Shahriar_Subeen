#include <stdio.h>

int main(){
    int n = 0;

    while(n < 10){
        n = n + 1;

        if(n % 2 == 0){
            continue;
        }

        printf("%d\n",n);
    }

    return 0;
}

/*
Output : 
1
3
5
7
9
*/