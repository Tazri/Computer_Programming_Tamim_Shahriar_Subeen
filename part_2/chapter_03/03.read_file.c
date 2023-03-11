#include <stdio.h>

/*
Before run this program must be create "./text/in.txt" file
where contain : 
22
22

or any two integer in sperate line
*/

int main(){
    FILE *fp_in,*fp_out;
    char *input_file = "./text/in.txt";
    char *output_file = "./text/out.txt";
    int num1,num2,sum;

    fp_in = fopen(input_file,"r");
    fp_out = fopen(output_file,"w");

    fscanf(fp_in,"%d",&num1);
    fscanf(fp_in,"%d",&num2);
    sum = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,sum);
    fprintf(fp_out,"%d + %d = %d\n",num1,num2,sum);
    fprintf(fp_out,"sum is %d\n",sum);

    fclose(fp_in);
    fclose(fp_out);


    return 0;
}

/*
This program output : 
22 + 22 = 44

And create a file "./text/out.txt" where contain : 
22 + 22 = 44
sum is 44

*/