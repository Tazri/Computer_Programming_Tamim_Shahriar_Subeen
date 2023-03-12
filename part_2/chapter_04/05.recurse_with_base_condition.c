#include <stdio.h>

void recurse(int count){
    if (count == 5){ // the base condition
        return ; // here stop the recursion
    }

    printf("I am learning recursion.\n");
    recurse(count+1);
    return 0;
}

int main(){
    recurse(1);
    return 0;
}

/*
Output : 
I am learning recursion.
I am learning recursion.
I am learning recursion.
I am learning recursion.
*/