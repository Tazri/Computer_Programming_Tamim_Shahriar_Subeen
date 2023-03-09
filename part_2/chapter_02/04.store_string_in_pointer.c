#include <stdio.h>

int main(){
    char s[] = "Bangladesh";
    char *p;
    p = s;
    char *country = "Bangladesh";
    printf("Name of our countery is : %s\n",p);
    printf("*country : %s\n",country);
    return 0;
}

/*
Output : 
Name of our countery is : Bangladesh
*country : Bangladesh
*/