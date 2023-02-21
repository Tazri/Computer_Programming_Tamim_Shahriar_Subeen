#include <stdio.h>

double pi = 3.14; // global variable

void my_func(){
    pi = 3.1416;

    // void means function dose not return anything
}

int main(){
    printf("%lf\n",pi); // 3.140000
    my_func();
    printf("%lf\n",pi); // 3.141600

    return 0;
}