#include <stdio.h>

int main(){
    int i ;
    
    for(i = 33;i <= 126;i++){
        printf("ASCII code for %c is %d\n",i,i);
    }

    return 0;
}

/*
Output :
ASCII code for ! is 33
ASCII code for " is 34
ASCII code for # is 35
ASCII code for $ is 36
ASCII code for % is 37
ASCII code for & is 38
......................
......................
*/