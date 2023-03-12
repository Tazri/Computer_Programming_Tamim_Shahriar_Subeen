#include <stdio.h>

void recurse(int count){
    if(count > 5){
        return ; // base condition for recursion
    }

    recurse(count+1);
    printf("Count = %d\n",count);
    return 0;
}

int main(){
    recurse(1);
    return 0;
}

/*
Output : 
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
*/