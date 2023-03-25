#include <stdio.h>

struct student {
    int id;
    char name[40];
};

int main(){
    struct student one;

    scanf("%d",&one.id);
    scanf(" %[^\n]",one.name); // get input untill find the '\n' char

    printf("> Name : %s\n",one.name);
    printf("> Id : %d\n",one.id);
    return 0;
}

/*
Ouput : 
324
ANS Anonymo
> Name : ANS Anonymo
> Id : 324

*/