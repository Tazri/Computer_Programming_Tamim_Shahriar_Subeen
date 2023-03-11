/*
Must create a folder with name 'text' in this file parent repository
otherwise it did not work

*/
#include <stdio.h>

int main(){
    FILE *fp;
    char *file_name_with_path = "./text/my_file.txt";

    fp = fopen(file_name_with_path,"w");

    fprintf(fp,"THis is file created by my program! ");
    fprintf(fp,"I am so happy.\n");
    fclose(fp);
    fprintf(fp," Second line.\n");

    return 0;
}



/*
This folder create a file to 'text/my_file.txt' where contain : 

THis is file created by my program! I am so happy.
*/