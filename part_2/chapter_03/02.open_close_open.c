/*
Before run this program must create a 
repository named './text/'
*/

#include <stdio.h>

int main(){
    FILE *fp;
    char *filename = "./text/my_file.txt";
    fp = fopen(filename,"w");

    fprintf(fp,"This is a file created by my program! ");
    fprintf(fp,"I am so happy.\n");
    fclose(fp);

    // open again
    fp = fopen(filename,"a");
    fprintf(fp,"Second line.\n");
    fclose(fp);

    return 0;
}

/*
Output : 
// createa file './text/my_file.txt' where contain:
This is a file created by my program! I am so happy.
Second line.
*/