#include <stdio.h>

#define true 1
#define false 0
typedef short bool;

bool is_digit(char c){
    if(c >= '0' && c <= '9'){
        return true;
    }
    return false;
}

int main(){
    char c;

    printf("Please enter any character : ");
    
    c = getchar();
    getchar();

    if(is_digit(c)){
        printf("%c is a digit.\n",c);
    }else{
        printf("%c is not a digit.\n",c);
    }

    return 0;
}

/*
Output Sample 1 : 
Please enter any character : 5
5 is a digit.

Output Sample 2 : 
Please enter any character : s
s is not a digit.
*/