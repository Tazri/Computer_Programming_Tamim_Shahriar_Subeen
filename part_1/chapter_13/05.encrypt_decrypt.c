#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
typedef short bool;

int is_upper_or_lower(char c){
    /*
    return 1 for upper
    return 0 for non letter
    return -1 for lower
    */

   if(c >= 'a' && c <= 'z'){
    return -1;
   }else if(c >= 'A' && c <= 'Z'){
    return 1;
   }

   return 0;
}

char shift(char c,int shift_n){
    int n = shift_n % 26;
    int i;

    if(is_upper_or_lower(c) == 1){ // upper shifting
        i = c - 'A' + 1 + n;
        
        if(i > 26){
            i = i % 26;
        }else if(i < 1){
            i = 26 - i;
        }

        return (char)('A' + i -1); 
    }else if(is_upper_or_lower(c) == -1){ // lower shifting
        i = c - 'a' + 1 + n;
        
        if(i > 26){
            i = i % 26;
        }else if(i < 1){
            i = 26 - i;
        }

        return (char)('a' + i -1);
    }

    // no shift
    return c;
}


void encrypt(char s[],int shifting){
    int i;

    for(i = 0; s[i] != '\0';i++){
        s[i] = shift(s[i],shifting);
    }
}

void decrypt(char s[],int deshifting){
    int i;

    for(i = 0;s[i] != '\0';i++){
        s[i] = shift(s[i],-deshifting);
    }
}

int main(){
    char text[200];

    printf("> Enter 0 of exit <\n");
    while (true)
    {
        printf("\n> Enter the text : ");
        fgets(text,sizeof(text),stdin);

        if(!strcmp(text,"0\n")){
            printf("\n> Program Terminate <\n");
            break;
        }

        // encypt the text
        encrypt(text,1);
        printf("> Encrypt is : %s",text);
        
        decrypt(text,1);
        printf("> Decrypt is : %s",text);

    }
    
    return 0;
}

/*
Output : 
> Enter 0 of exit <

> Enter the text : Good Luck
> Encrypt is : Hppe Mvdl
> Decrypt is : Good Luck

> Enter the text : Good luck
> Encrypt is : Hppe mvdl
> Decrypt is : Good luck

> Enter the text : Zebra
> Encrypt is : Afcsb
> Decrypt is : Zebra

> Enter the text : 0

> Program Terminate <
*/