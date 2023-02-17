#include <stdio.h>

int main(){
    int n = 1;

    while(n <= 10){ // this condition truth forever
        printf("%d\n",n); // thats why it make it infinite loop
    }

    n++;// this condition outside the loop
    return 0;
}

/*
Output : 
1
1
1
1
..
..
..
*/