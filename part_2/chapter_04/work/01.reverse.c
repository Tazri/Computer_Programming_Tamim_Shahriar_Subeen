#include <stdio.h>
#include <string.h>

void reverse_str(char str[],int low,int high){
    if(low > high){
        return;
    }

    // swap the value
    char temp = str[low];
    str[low] = str[high];
    str[high] = temp;
    reverse_str(str,low+1,high-1);
}

int main(){
    char name[20];
    printf("> Enter the any name : ");
    scanf("%s",&name);
    getchar();

    reverse_str(name,0,strlen(name)-1);
    printf("> The reversed is : %s\n",name);
    return 0;
}

/*
Output : 
> Enter the any name : Anonymo
> The reversed is : omynonA
*/