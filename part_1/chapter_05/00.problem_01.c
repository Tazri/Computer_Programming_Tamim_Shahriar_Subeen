#include <stdio.h>

int main(){
    int x,y,c1,c2;

    // get c1 and c2
    printf("x + y = ");
    scanf("%d",&c1);

    printf("x - y = ");
    scanf("%d",&c2);

    // caculate x and y
    x = (c1+c2)/2;
    y = c1 - x;

    printf("x = %d\ny = %d\n",x,y);

    return 0;
}

/*
Output : 
x + y = 15
x - y = 5
x = 10
y = 5
*/