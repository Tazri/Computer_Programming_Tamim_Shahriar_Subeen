#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    if(n^m){ // if two numebr equal then two number xor is 0
        printf("Numbers are not equal\n");
    }else{
        printf("Numbers are equal.\n");
    }
    return 0;
}

/*
Output Sample : 
32 32
Numbers are equal.

Output sample : 
32
31
Numbers are not equal
*/