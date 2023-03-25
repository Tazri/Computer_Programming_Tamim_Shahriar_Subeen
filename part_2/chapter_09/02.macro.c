#include <stdio.h>

#define MAX(a,b) (a > b ? a : b)

int main(){
    int a = 83, b = 323;
    double d1 = 8.32323, d2 = 3.33332323;

    printf("maximum of %d and %d  is %d\n",a,b,MAX(a,b));
    printf("maximum of %lf and %lf is %lf\n",d1,d2,MAX(d1,d2));
    return 0;
}

/*
Output : 
maximum of 83 and 323  is 323
maximum of 8.323230 and 3.333323 is 8.323230
*/

/*
Here macro is 
#define MAX(a,b) (a > b ? a : b)

when write MAX(2,3) then it will be replace below code block
(2 > 3 ? 2 : 3)

*/