#include <stdio.h>

int a;
static int b;

void func(){
    a = a + 1;
    b = b + 1;
}

int main(){
    func();
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}

/*
Output : 
myfnc, x = 20, y = 10
main, x = 20, y = 5

*/