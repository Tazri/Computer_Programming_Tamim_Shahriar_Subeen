#include <stdio.h>

int main(){
    char saarc[7][100] = {
        "Bangladesh",
        "India",
        "Pakistan",
        "Sri Lanka",
        "Nepal",
        "Bhutan",
        "Maldives"
    };

    int row;

    for(row = 0;row < 7;row++){
        printf("%s\n",saarc[row]);
    }

    printf("saarc[0][5] : %c\n",saarc[0][5]); // a
    printf("saarc[5][0] : %c\n",saarc[5][0]); // B


    return 0;
}