#include <stdio.h>
#include <string.h>

struct nametype{
    char first[20];
    char last[20];
};

struct student{
    int id;
    struct nametype name;
};

int main(){
    struct student me;

    scanf("%d",&me.id);
    getchar();

    scanf("%s",me.name.first);
    getchar();

    scanf("%s",me.name.last);
    getchar();

    printf("> Id : %d\n",me.id);
    printf("> Name : %s %s\n",me.name.first,me.name.last); 
    return 0;
}

/*
3345
Arabi
Arrowbeen
> Id : 3345
> Name : Arabi Arrowbeen

*/