#include <stdio.h>

int string_length_one(char str[]){
    int i, length = 0;

    for(i = 0;str[i] != '\0';i++){
        length++;
    }

    return length;
}

// another way
int string_length_two(char str[]){
    int i ;
    for(i = 0;str[i] != '\0';i++);

    return i;
}

// another way
int string_length(char str[]){
    int i = 0;
    while(str[i]) i++;
    return i;
}

int main(){
    char country[100];

    int lenght;

    while(1 == scanf("%s",country)){
        lenght = string_length(country);
        printf("length: %d\n",lenght);
    }
    return 0;
}

/*
Bangladesh
length: 10
Country
length: 7
*/