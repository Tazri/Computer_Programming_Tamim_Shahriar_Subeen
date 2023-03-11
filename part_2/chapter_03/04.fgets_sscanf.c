#include <stdio.h>
/*
Before run this program must be create "./text/in.txt" file
where contain : 
22 22

or any two integer in one line sperate by one space
*/
int main(){
    FILE *fp_in,*fp_out;
    char *input_file = "./text/in.txt";
    char *output_file = "./text/out.txt";

    // open the file
    fp_in = fopen(input_file,"r");
    fp_out = fopen(output_file,"w");

    char line[80];
    int num1,num2,sum;
    
    fgets(line,80,fp_in);
    printf("Line : %s\n");

    sscanf(line,"%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("%d %d %d\n",num1,num2,sum);
    fprintf(fp_out,"%d\n",sum);

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}

/*
Output : 
Line : 22 22
22 22 44

Create a file where contain only 
44
*/