#include <stdio.h>

int main(){
    int ft_marks[40] = {83,86,97,95,93,95,86,52,49,41,
                        42,47,90,59,63,86,40,46,92,92,
                        56,87,89,65,63,45,20,41,23,63,
                        45,89,63,45,78,52,45,65,41,45};

    int st_marks[40] = {83,89,97,95,93,95,46,52,69,91,
                        62,45,90,56,38,96,30,46,92,92,
                        56,77,89,65,65,45,20,41,23,63,
                        45,79,63,45,78,52,45,55,41,45};

    int final_marks[40] = {83,39,47,95,93,95,46,52,69,91,
                           62,45,20,56,38,96,30,56,82,93,
                           56,77,89,65,95,45,20,41,73,63,
                           45,79,63,45,78,52,45,55,41,75};

    int i;
    int numbers[101];

    for(i = 0; i < 101;i++){
        numbers[i] = 0;
    }

    double total_marks[40];

    for(i = 0;i < 40;i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;

        // list of numbers
        if(numbers[(int)total_marks[i]] != 0){
            numbers[(int)total_marks[i]]++;
        }else{
            numbers[(int)total_marks[i]] = 1;
        }
    }

    for(i = 1;i <= 40;i++){
        printf("Roll No: %d\t Total Marks: %0.0lf\n",i,total_marks[i-1]);
    }

    // report

    printf("The report : ");
    for(i = 1;i <= 100;i++){
        if(numbers[i] != 0){
            printf("Total students of got %d number is : %d\n",i,numbers[i]);
        }
    }

    return 0;
}