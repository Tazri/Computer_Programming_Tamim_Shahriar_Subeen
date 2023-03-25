#include <stdio.h>
#include <string.h>

int main(){
    char *str = "Bangladesh";

    printf("%c, %c, %c, %c\n",*str,*(str+1),*(str+2),*(str+3));

    printf("%c, %c, %c, %c\n",*str,*str+1,*str+2,*str+3);
    return 0;
}

/*
Output : 
B, a, n, g
B, C, D, E

*/