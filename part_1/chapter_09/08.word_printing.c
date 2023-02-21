#include <stdio.h>
#include <string.h>

// check is letter
int is_letter(char a){
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') ){
        return 1;
    }
    return 0;
}

// make upper
char make_upper(char a){
    if( a >= 'a' && a <= 'z'){
        return 'A' + (a - 'a');
    }

    return a;
}

int main(){
    int i,j,length, is_word_start;
    char str[1001];

    // get input
    printf("Enter you text : ");
    gets(str);

    length = strlen(str);
    is_word_start = 0;

    for(i = 0; str[i] != '\0';i++){
        // if is letter and is word is start
        if(is_word_start && is_letter(str[i])){
            printf("%c",str[i]);
        }

        // if is_word_start not and is_letter ok
        else if(!is_word_start && is_letter(str[i])){
            is_word_start = 1;
            printf("%c",make_upper(str[i]));
        }

        // if is not letter
        else if(!is_letter(str[i]) && is_word_start){
            
            printf("\n");
            is_word_start = 0;
        }
    }

    printf("\n");

    return 0;
}

/*
Enter you text : This is a test 9.9
This
Is
A
Test
*/