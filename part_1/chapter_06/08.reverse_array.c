#include <stdio.h>

int main(){
    int ara[] = {
        10,20,30,40,50,60,70,80,90,100
    };
    int i,j,temp;

    // reversing
    for(i = 0,j=9;i < (10/5);i++,j--){
        // swaping
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }

    // print all element
    for(i = 0;i < 10;i++){
        printf("ara[%d] = %d\n",i,ara[i]);
    }
    return 0;
}

/*
ara[0] = 100
ara[1] = 90
ara[2] = 30
ara[3] = 40
ara[4] = 50
ara[5] = 60
ara[6] = 70
ara[7] = 80
ara[8] = 20
ara[9] = 10
*/