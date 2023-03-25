#include <stdio.h>
#include <string.h>

int main(){
    struct student{
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    strcpy(one.name,"Anonymo");

    printf("Id : %d\n",one.id);
    printf("Name : %s\n",one.name);

    return 0;
}

/*
Output : 
Id : 1
Name : Anonymo

*/