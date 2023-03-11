/*
Must create a folder with name 'text' in this file parent repository
otherwise it did not work

*/

#include <stdio.h>

int main(){
    FILE *fp;
    char *filename_with_path = "./text/my_file.txt";

    fp = fopen(filename_with_path,"w");

    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp,"I am so happy.");

    // close the file after the work
    fclose(fp);

    return 0;
}

/*
This folder create a file to 'text/my_file.txt' where contain : 
This is a file created by my program! I am so happy.
*/