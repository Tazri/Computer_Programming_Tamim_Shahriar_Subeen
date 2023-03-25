#include <stdio.h>
#include <string.h>

struct nametype {
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;
};

int main(){
    struct studenttype students[5];

    int i,n = 5;

    for(i = 0;i < n;i++){
        printf("Enter the student details for student %d: \n",i+1);
        printf("> ID : ");
        scanf("%d",&students[i].id);
        getchar();

        printf("> First Name : ");
        scanf("%s",students[i].name.first);
        getchar();

        printf("> Last name : ");
        scanf("%s",students[i].name.last);

        printf("\n");
    }

    printf("\n-----> Output <-----\n");
    for(i = 0;i < n;i++){
        printf("> Hello, %s %s (%d)\n",students[i].name.first,students[i].name.last,students[i].id);
    }
}

/*
Output : 
Enter the student details for student 1: 
> ID : 158
> First Name : Arabi
> Last name : Arrowbeen

Enter the student details for student 2: 
> ID : 34321
> First Name : ANS
> Last name : Anonymo

Enter the student details for student 3: 
> ID : 45353  
> First Name : Focala
> Last name : Focasa

Enter the student details for student 4: 
> ID : 345254
> First Name : Troy
> Last name : Farha

Enter the student details for student 5: 
> ID : 345345
> First Name : Alayth
> Last name : Anya


-----> Output <-----
> Hello, Arabi Arrowbeen (158)
> Hello, ANS Anonymo (34321)
> Hello, Focala Focasa (45353)
> Hello, Troy Farha (345254)
> Hello, Alayth Anya (345345)
*/