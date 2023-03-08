#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define GRID_SIZE 9
typedef short bool;

void print(char *s){
    printf("%s\n",s);
}

void help(){
    printf("\n> All Command : \n");
    print("> Command -> Use");
    print("> U -> Go Up");
    print("> L -> Go Left");
    print("> R -> Go Right");
    print("> D -> Go Down");
    print("> S -> Stop");
    print("> H -> See the command again");
}

int main(){
    int i,j,x,y;
    char command;
    char message[100] = "Please enter the intial position x y : ";
    bool grid[GRID_SIZE][GRID_SIZE];


    // think all cell are open
    for(i = 0;i < GRID_SIZE;i++){
        for(j = 0;j < GRID_SIZE;j++){
            grid[i][j] = true;
        }
    }

    // block cell
    grid[0][4] = false;
    grid[4][2] = false;
    grid[5][8] = false;


    while(true){
        printf("%s",message);
        scanf("%d %d",&x,&y);
        getchar();

        if(!grid[x][y]){
            strcpy(message,"\nYour position is block. Please enter the position again : ");
            continue;
        }

        if(x >= GRID_SIZE || y >= GRID_SIZE){
            strcpy(message,"\nYour position is out of range, range is 0-8.\nPlease Enter the poisiton again : ");
            continue;
        }

        break;
    }

    

    help();

    while(true){
        printf("\nPosition(%d,%d) > Command : ",y,x);
        scanf("%c",&command);
        getchar();

        if(command == 'S'){
            printf("\n> Final Position of the robot is : %d,%d\n",y,x);
            print("> Program terminate <");
            break;
        }

        // if command is H
        else if(command == 'H'){
            help();
        }

        // if command is D
        else if(command == 'D'){
            y += 1;

            if(y >= GRID_SIZE){
                print("> There is no more cell below!!");
                y -= 1;
            }else if(!grid[y][x]){
                printf("> Below cell is (%d,%d) is blocked!!\n",y,x);
                y -= 1;
            }
        }

        // if command is U
        else if(command == 'U'){
            y -= 1;

            if(y < 0){
                print("> There is no more cell above!!");
                y += 1;
            }else if(!grid[y][x]){
                printf("> Above cell is (%d,%d) is blocked!!\n",y,x);
                y += 1;
            }
        }

        // if command R
        else if(command == 'R'){
            x += 1;
            if(x >= GRID_SIZE){
                print("> There is no more cell Right!!");
                x -= 1;
            }else if(!grid[y][x]){
                printf("> Right cell is (%d,%d) is blocked!!\n",y,x);
                x -= 1;
            }
        }

        // if command is L
        else if(command == 'L'){
            x -= 1;
            if(x < 0){
                print("> There is no more cell Left!!");
                x += 1;
            }else if(!grid[y][x]){
                printf("> Down cell is (%d,%d) is blocked!!\n",y,x);
                x += 1;
            }
        }
        
        // if command '\n' or ' '
        else if(command == ' ' || command == '\n'){
            print("> You did not even enter the command!!");
        }

        else{
            print("> Unkonwn Command. Command 'H' To see all command.");
        }
    }   
    
}

/*
Output : 
Please enter the intial position x y : 0 0

> All Command : 
> Command -> Use
> U -> Go Up
> L -> Go Left
> R -> Go Right
> D -> Go Down
> S -> Stop
> H -> See the command again

Position(0,0) > Command : R

Position(0,1) > Command : R

Position(0,2) > Command : R

Position(0,3) > Command : R
> Right cell is (0,4) is blocked!!

Position(0,3) > Command : L

Position(0,2) > Command : D

Position(1,2) > Command : D

Position(2,2) > Command : D

Position(3,2) > Command : D
> Below cell is (4,2) is blocked!!

Position(3,2) > Command : L

Position(3,1) > Command : R

Position(3,2) > Command : l
> Unkonwn Command. Command 'H' To see all command.

Position(3,2) > Command : S

> Final Position of the robot is : 3,2
> Program terminate <
*/