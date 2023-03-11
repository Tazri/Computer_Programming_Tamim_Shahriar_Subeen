Chapter 3: File
==================
I divide this chapter into 5 part : 
- [Write a file](#write-a-file)
- [Read the file](#read-the-file)
- [Read and write binary file](#read-and-write-binary-file)
- [Chaning FILE handle indicator position](#chaning-file-handle-indicator-position)
- [Remove file](#remove-file)

--------------------------------------------------------------------------------------------------------------------------------
## Write a file
**Need to Know about some function to write a file :**

● [fopen() function](#fopen-function) <br />
● [fclose() function](#fclose-function) <br />
● [fprintf() function](#fprintf-function)<br />

#### fopen() function :

```c
⚙️ function > fopen <

// Prototype : 
FILE *fopen(const char *restrict filename,const char *restrict mode);

/*
input : 
const char *restrict filename : indicate the string filename with path, absulote or relative
const char *restrict mode : define the mode, is open the file write,read or append mode etc

output : 
return FILE pointer if file exist other wise return NULL if file is not open.

work : 
take a filename and mode and return the FILE handle if file open successfully otherwise return NULL.
*/
```

All mode for open the file : 

| Mode | Description                                                                                                     |
|------|-----------------------------------------------------------------------------------------------------------------|
|"w"   | Open the file for write file if file dose not exist then create the file for write.                             |
|"r"   | Open the file for read, file must be exist.            |
|"a"   | Open the file for write from last position of the file. |
|"w+"  | Open the file in read and write mode. If file has something before open then it can be erase. |
|"r+"  | Open the file read and write mode. |
|"a+"  | Open the file read and append mode. But read mode start reading at begining of the file where write mode start at ending |

> 🔴 rb(read binary), wb(write binary) and ab(append binary) do the same thing but for binary file.


### fclose() function :
```c
⚙️ function > fclose <

// prototype
int fclose(FILE *stream);

input : 
FILE *stream : a file handle.

Return Value : 
int : If file close successfully the return 0 otherwise return EOF.

work : 
Close the open file.
```

### fprintf() function :
```c
⚙️ function > fprintf() <
// prototype
int fprintf(FILE *stream,const char *format,...);

input : 
FILE *stream : a file handle
const char * format : A formated string.
... : Inputs for formated string.

return value : 
return a number, how much character write.
```

Program to example of write something using `fopen`, `fclose` and `fprintf` function : 
```c
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
```

**Another program to example but append mode :**
```c
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
```

**Program to example of write something in file after close the file :**
```c
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
```

<hr />

## Read the file
**Need some function to read data from file :**
● [fscanf function](#fscanf) <br />
● [fputc](#fputc) <br />
● [fgets](#fgets) <br />
● [fgetc](#fgetc) <br />
● [sscanf](#sscanf) <br />


#### fscanf

```c
⚙️ function > scanf() <
// prototype
int fscanf(FILE *stream,const char *format,...);

input : 
FILE *stream : a file handle.
const char * format : formated string.
... : Variables address for formated string.

return value :
number of input variable.
```

#### fputc
```c
⚙️ function > fputc <
// prototype
int fputc(int char,FILE *stream)

input: 
int char : Interger of character which will write down in the file.
FILE * stream : Handle of a file where data will write.

return :
Return integer of character which is write down in the file and if error occurs then return EOF.
```

#### fgets
```c
⚙️ function > fgets <
// prototype
char *fgets(char *str,int num,FILE *stream);

input :
char *str : String pointer where data will stored.
int num : How much character read.
FILE *stream : Handle of the file which is use to read.

return value :
char *: Return the pointer of string where stored the data if data read successfully otherwise return NULL.
```

#### fgetc

```c
⚙️ function > fgetc <
// prototype
int fgetc (FILE *stream)

input :
FILE *stream : Handle of file use is use to read.

return :
A typecasted integer from character or EOF.
```
<br />

> 🟢 What is EOF ?
> EOF or **E**nd **o**f **F**ile a signal. It produce when can not read data from any source. This signal vary based on system. For linux, -1 is EOF signal.
> Press `ctr+d` to input the EOF signal for linux and `ctrl+z` to input the EOF signal in windows.

#### sscanf
```c
⚙️ function > sscanf <
// prototype
int sscanf(const char *s,const char *format, ...);

input :
const char * s: String input.
const char *format: A fomated string.
... : Variables address for formated string.

return value :
Return number of variable read otherwise return EOF.
```

**Program to example read data from file using fscanf :**
```c
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
```

**Program to example of `fgets` and `sscanf` :**
```c
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
```

--------------------------------------------------------------------------------------------------------------------------------

## Read and Write Binary File.
Before going to example to read and write binary file example, need to know about some basic function, Here : 

● [perror](#perror)
● [Two important macro](#two-important-macro)

#### perror
```c
⚙️ function > perror <
// prototype
void perror(const char *str);

input : 
const char *str : a string for printing before a error message.

output : 
void : nothing to return
```

### Two important macro
```c
? what is 'EXIT_FAILURE' and 'EXIT_SUCCESS' ?

This two are a macro define in <stdlib.h> header folder.

#define EXIT_SUCCESS /* implementation defined */
#define EXIT_FAILURE /* EXIT_FAILURE */

When out of the 'main' funciton then 
return a value from above one. 'EXIT_FAILURE'
mean program dose not finish as well where
'EXIT_SUCCESS' mean program finish well.
```

> 🟢 Read and write binary file, in that case use "rb", "wb" and "ab" mode.

**Where the example of read and write binary data in c :**
```c
/*
before run this program must be has a
image file at ./text/anonymo.png

and must be exist this folder
'./text/copy/'

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp_in, *fp_out;
    char *input_file = "./text/anonymo.png";
    char *output_file = "./text/copy/anonymo2.png";
    int ch;

    // open the input file
    fp_in = fopen(input_file,"rb");
    if(fp_in == NULL){
        // throw error
        perror("> FILE opening failed <\n");
        return EXIT_FAILURE;
    }

    // open the output file
    fp_out = fopen(output_file,"wb");

    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }
        fputc(ch,fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}

/*
Produce a another same type image at ./text/copy/anonymo.png'
*/
```

--------------------------------------------------------------------------------------------------------------------------------

## Chaning FILE handle indicator position
Chaning file position for read and write, need know about some 
function is :

● [fseek() function](#fseek) <br />
● [ftell() function](#ftell)<br />

#### fseek
```c
⚙️ function > fseek <
// prototype
int fseek(FILE *stream,long int offset,int whence)

input :
FILE * stream : a file handle
long int offset : distance from whence count by byte.
int whence : Position where offset add.

return value :
0 if successfully change otherwise return non-zero.

// some constant for fseek
'SEEK_SET' start position.
'SEEK_CUR' current position.
'SEEK_END' end position.
```

#### ftell
```c
⚙️ function > ftell <
// prototype
long int ftell(FILE *stream)

input :
FILE *stream : a file handle.

return value : 
long int : Return of position of file indicator.
```

**Here is example of use fseek :**
```c
/*
Before run this program,
the file must be exist,
'./text/in.txt' where contain : 
ABCDEFGHIJKL
MNOPQRST
UVWX
YZ
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("./text/in.txt","r");
    if(fp == NULL){
        perror("> Can't open file <");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);
    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);

    fseek(fp,0,0);
    ch = fgetc(fp);
    printf("> ch : %c\n",(char)ch);

    fclose(fp);

    return 0;    
}

/*
Output : 
> ch : A
> ch : B
> ch : A
*/
```

**Example to figure out the file size :**
```c
/*
Before run this program must exist
a image at "./text/anonymo.png";
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // open the ./text/anonymo.png file in rb mode
    FILE *fp_in;
    char *input_file = "./text/anonymo.png";
    fp_in = fopen(input_file,"rb");
    if(fp_in == NULL){
        perror("> File opening Failed.\n");
        return EXIT_FAILURE;
    }

    // set indicator position to end
    fseek(fp_in,0,SEEK_END);

    // ftell return byte where is indicator now from start
    // to end.
    printf("> File Size : %ld bytes\n",ftell(fp_in));
    printf("> File Size (KiloByte) : %ld KB\n",ftell(fp_in)/1024);

    fclose(fp_in);

    return 0;
}

/*
Output : 
> File Size : 1205158 bytes
> File Size (KiloByte) : 1176 KB
*/
```

--------------------------------------------------------------------------------------------------------------------------------

## Remove file


```c
⚙️ function > remove <
// prototype
int remove(char *str);

input:
char *str: filename with path.

return value:
return 0 if successfully return file otherwise return non-zero.

work:
erase the file.
```

**Example of remove file :**
```c
/*
Before run this program must exist
a image at "./text/anonymo.png";
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // open the ./text/anonymo.png file in rb mode
    FILE *fp_in;
    char *input_file = "./text/anonymo.png";
    fp_in = fopen(input_file,"rb");
    if(fp_in == NULL){
        perror("> File opening Failed.\n");
        return EXIT_FAILURE;
    }

    // set indicator position to end
    fseek(fp_in,0,SEEK_END);

    // ftell return byte where is indicator now from start
    // to end.
    printf("> File Size : %ld bytes\n",ftell(fp_in));
    printf("> File Size (KiloByte) : %ld KB\n",ftell(fp_in)/1024);

    fclose(fp_in);

    return 0;
}

/*
Output : 
> File Size : 1205158 bytes
> File Size (KiloByte) : 1176 KB
*/
```

<hr />
<br />

#### [< Chapter 2: Pointer](./../chapter_02/note.md) | [Part 2](./../part_2.md) | [Chapter 4: Recursion >](./../chapter_04/note.md)