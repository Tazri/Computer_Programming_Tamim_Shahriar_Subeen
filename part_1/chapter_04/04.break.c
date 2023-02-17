#include <stdio.h>

int main(){
    int n = 1;

    while(n <= 100){
        printf("%d\n",n);
        n++;

        if(n > 10){
            break; // break the loop
        }
    }

    return 0;
}

/*
Output : 
1
2
3
4
5
6
7
8
9
10
*/