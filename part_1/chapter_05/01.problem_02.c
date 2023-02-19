#include <stdio.h>

int main(){
    double x,y,a1,a2,b1,b2,c1,c2,determine;

    // get all value
    printf("a1 : ");
    scanf("%lf",&a1);

    printf("b1 : ");
    scanf("%lf",&b1);

    printf("c1 : ");
    scanf("%lf",&c1);

    printf("a2 : ");
    scanf("%lf",&a2);

    printf("b2 : ");
    scanf("%lf",&b2);

    printf("c2 : ");
    scanf("%lf",&c2);
    
    determine = a1*b2 - a2*b1;
    x = (b2*c1 - b1*c2)/ determine;
    y = (a1*c2 - a2*c1)/ determine;

    if(determine != 0){
        printf("x = %lf\n",x);
        printf("y = %lf\n",y);
    }else{
        printf("There is no solution!!\n");
    }

    return 0;
}

/*
Output : 
a1 : 4
b1 : 5
c1 : 14
a2 : 5
b2 : 6
c2 : 17
There is no solution!!
*/