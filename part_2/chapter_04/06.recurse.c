#include <stdio.h>

void recurse(int count){
    if(count > 5){
        // here recursion will stop
        return ;
    }

    printf("Count = %d\n",count);
    recurse(count+1);
}

int main(){
    recurse(1);
    return 0;
}

/*
Output : 
Count = 1
Count = 2
Count = 3
Count = 4
Count = 5
*/