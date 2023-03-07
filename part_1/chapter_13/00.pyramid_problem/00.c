#include <stdio.h>

void print_char(char c,int n){ // print char for n times
    int i;
    for(i = 0;i < n;i++){
        printf("%c",c);
    }

    printf("\n");
}

void print_pyramid(int n){
    int i;

    for(i = n;i > 0;i--){ // upper part
        print_char('*',i);
    }

    for(i=2;i<=n;i++){ // lower part
        print_char('*',i);
    }
}

int main(){
    int size;
    printf("> Enter 0 or any negative nmber to exit\n");

    while(1){
        printf("\nEnter the pyramid size : ");
        scanf("%d",&size);
        if(size <= 0) {
            printf("\n\n>> Program Terminate <<\n");
            break;
        }

        print_pyramid(size);
        printf("\n");
    }
    return 0;
}

/*
Output : 
> Enter 0 or any negative nmber to exit

Enter the pyramid size : 3
***
**
*
**
***


Enter the pyramid size : 0


>> Program Terminate <<
*/