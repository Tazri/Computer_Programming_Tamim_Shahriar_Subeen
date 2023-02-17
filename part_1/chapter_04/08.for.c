#include <stdio.h>

int main(){
    int n = 5;
    int i = 1;

    for(;;){
        if(i > 10){
            break;
        }

        printf("%d X %d = %d\n",n,i,n*i);
        i = i + 1;
    }

    return 0;
}

/*
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
*/