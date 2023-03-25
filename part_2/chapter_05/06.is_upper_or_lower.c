#include <stdio.h>

char to_upper(char ch){
                    //      64  32  16  8   4   2   1
    return ch &95; // 95 -> 1   0   1   1   1   1   1
}

char to_lower(char ch){
                     //      64  32  16  8   4   2   1
    return ch | 32; // 32 -> 0   1   0   0   0   0   0
}

int main(){
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";

    for(int i = 0;i < 26;i++){
        printf("Uppercase : %c, ", to_upper(str[i]));
        printf("Lowercase : %c\n",to_lower(str[i]));
    }
    return 0;
}