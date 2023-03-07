#include <stdio.h>
#include <string.h>
#include <math.h>

// function to convert binary to string
int b_to_d(char binary[]){ // binary to decimal
    int value = 0,power,i,len;
    len = strlen(binary);
    power = 0;

    for(i = len-1;i >= 0;i--,power++){
        if(binary[i] == '1'){
            value+= (int)pow(2,power);
        }
    }

    return value;
}

int main(){
    int value;
    char binary[100];

    while(1){
        printf("Command 'exit' to terminate the program.\n");
        printf("> Enter the binary number : ");
        scanf("%s",&binary);
        getchar();

        // break condition
        if(!strcmp(binary,"exit")){
            printf("\n\n>> Program Terminate <<\n");
            break;
        }

        value = b_to_d(binary);
        printf("> %s(2) = %d(10)\n\n",binary,value);
    }

    return 0;
}

/*
Output : 
Command 'exit' to terminate the program.
> Enter the binary number : 1101
> 1101(2) = 13(10)

Command 'exit' to terminate the program.
> Enter the binary number : exit


>> Program Terminate <<
*/