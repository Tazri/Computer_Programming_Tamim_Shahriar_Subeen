#include <stdio.h>
#include <string.h>

typedef struct{
    char first[20];
    char last[20];
} nametype;

typedef struct{
    int id;
    nametype name;
    char grade[5];
} studenttype;

void calculate_grade(studenttype * s,int mark){
    if(mark >= 80){
        strcpy(s->grade,"A+");
    }else if(mark >= 70){
        strcpy(s->grade,"A");
    }else if(mark >= 60){
        strcpy(s->grade,"A-");
    }else if(mark >= 50){
        strcpy(s->grade,"B");
    }else if(mark >= 40){
        strcpy(s->grade,"C");
    }else{
        strcpy(s->grade,"F");
    }
}

int main(){
    studenttype students[3];

    int i,n = 3;

    int marks[] = {72,82,60};

    printf(">>> Enter the students details <<<\n");
    for(i = 0;i < n;i++){
        printf("> ID : ");
        scanf("%d",&students[i].id);
        getchar();

        printf("> First Name : ");
        scanf("%s",students[i].name.first);
        getchar();

        printf("> Last Name : ");
        scanf("%s",students[i].name.last);
        getchar();
        printf("\n");
    }

    for(i = 0;i < n;i++){
        calculate_grade(&students[i],marks[i]);
    }

    printf("\n>>> Output <<<\n");
    for(i = 0;i < n;i++){
        printf("> Hey, %s %s(%d) Your got in exam %s.\n",students[i].name.first,students[i].name.last,students[i].id,students[i].grade);
    }
    return 0;
}

/*
>>> Enter the students details <<<
> ID : 323
> First Name : Arabi         
> Last Name : Arrowbeen

> ID : 342
> First Name : Alyath
> Last Name : Alya

> ID : 33
> First Name : Troy 
> Last Name : Farha


>>> Output <<<
> Hey, Arabi Arrowbeen(323) Your got in exam A.
> Hey, Alyath Alya(342) Your got in exam A+.
> Hey, Troy Farha(33) Your got in exam A-.
*/