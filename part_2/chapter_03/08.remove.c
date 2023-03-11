/*
Before run this program must be exist img
./text/copy/anonymo2.png

this program delete this image file
*/

#include <stdio.h>

int main(){
    int return_value;
    char *filename = "./text/copy/anonymo2.png";

    return_value = remove(filename);

    if(return_value != 0){
        perror("> File remove Failed for first time :(\n");
        return 1;
    }

    printf("> %s removed successfully, First time :)\n",filename);

    // now try to remove again
    return_value = remove(filename);

    if(return_value != 0){
        perror("> File remove failed for second time. :(\n");
        return 1;
    }

    printf("> %s removed successfully, Second time :)\n",filename);
    return 0;
}

/*
Output : 
> ./text/copy/anonymo2.png removed successfully, First time :)
> File remove failed for second time. :(
: No such file or directory

and it delete the anonymo2 file
*/