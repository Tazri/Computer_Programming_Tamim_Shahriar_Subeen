#include <stdio.h>

int main(){
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu\n",sizeof(int));
    printf("Size of int : %d\n",sizeof(num));
    printf("Size of char : %d\n",sizeof(char));
    printf("Size of double : %d\n",sizeof(double));
    printf("Size of float : %d\n",sizeof(float));

    return 0;
}

/*
Output : 
4
Size of int : 4
Size of char : 1
Size of double : 8
Size of float : 4
*/