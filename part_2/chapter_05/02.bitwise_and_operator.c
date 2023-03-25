#include <stdio.h>

int main(){
    int n1 = 5, n2 = 6, n3;
    n3 = n1 & n2;
    printf("%d & %d = %d\n",n1,n2,n3);
    return 0;
}

/*
output : 
5 & 6 = 4

explain : 
5 -> 1 0 1
&    | | |
6 -> 1 1 0 
-----------
     1 0 0 -> 4
*/