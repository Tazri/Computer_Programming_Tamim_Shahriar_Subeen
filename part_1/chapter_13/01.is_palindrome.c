#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
typedef int bool;

bool is_palindrom(char words[]){
    int last_index = strlen(words)-1;
    int i,j;

    for(i=0,j=last_index;i < ((last_index+1)/2);i++,j--){
        if(words[i] != words[j]){
            return false;
        }
    }

    return true;
}

int main(){
    char words[70];

    printf("> Enter 0 for exit\n");

    while (true)
    {
        printf("\n> Enter the words : ");
        scanf("%s",&words);

        if(!strcmp("0",words)){
            printf("\n> Program Terminate <\n");
            break;
        }

        if(is_palindrom(words)){
            printf("> %s is a pallindrome\n",words);
        }else{
            printf("> %s is not pallindrom\n",words);
        }
    }
    
}

/*
Output : 
> Enter 0 for exit

> Enter the words : hello
> hello is not pallindrom

> Enter the words : ll
> ll is a pallindrome

> Enter the words : black
> black is not pallindrom

> Enter the words : level
> level is a pallindrome

> Enter the words : 0

> Program Terminate <
*/