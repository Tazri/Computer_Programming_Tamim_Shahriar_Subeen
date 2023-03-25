#include <stdio.h>
#include <stdlib.h>

int main(){
    int *marks;
    int i,n;
    printf("Please enter the number of the students : ");
    scanf("%d",&n);

    // now allocate memory
    marks = (int *)malloc(sizeof(int)*n);

    printf("Enter the marks for each student : \n");
    for(i = 0;i < n;i++){
        scanf("%d",&marks[i]);
    }

    printf("Now here you can see the values : \n");
    // now print the marks array
    for(i = 0;i < n;i++){
        printf("%d\n",marks[i]);
    }

    return 0;
}

/*
Output : 
Please enter the number of the students : 3
Enter the marks for each student : 
3
4
5
Now here you can see the values : 
3
4
5
*/