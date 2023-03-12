#include <stdio.h>

void recurse(int count){
    if(count > 5){
        return; // recursion base condition
    }

    printf("count : %d\n",count);
    recurse(count+1);
    printf("Count = %d\n",count);
}

int main(){
    recurse(1);
    return 0;
}

/*
Output :
count : 1
count : 2
count : 3
count : 4
count : 5
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
*/