#include <stdio.h>
#include<time.h>

/* man console_codes:
   Clear: 1. Move cursor to origin (1,1)= ESC[H
             ESC = \033 in ASCII octal value
          2. Clear untill end of display from cursor=ESCJ
             ESC = \033 in ASCII octal value */
#define clear() printf("\033[H\033J");

/* man console_codes:
   goto (x,y) coordinates: 
    Move cursor to origin (x,y)= ESC[x;yH
    ESC = \033 in ASCII octal value */

#define goto(x,y) printf("\033[%d;%dH",x,y);

#define X 10
#define Y 10

void print_matrix(int matrix[X][Y],int x,int y)
{
    clear();
    goto(1,1);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            printf(" %d ",matrix[i][j]);
        printf("\n");
    }
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

int main()
{
    int x=X,y=Y;
    int floor[X][Y]={0};

    /*for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            floor[x][y]=0;
    }*/
    
    print_matrix(floor,x,y);
    
    int j=0;
    for(int i=0;i<10;i++)
    {
        if(!j)
        {
            while(j<10)
            {
                floor[i][j]=1;
                j++;
                print_matrix(floor,X,Y);
                delay(50);/* 1 second delay */
                /*getchar();*/
            }
            continue;
        }
        if(!(j--^10))
        {
            while(j>=0)
            {
                floor[i][j]=1;
                j--;
                print_matrix(floor,X,Y);
                delay(50);/* 1 second delay */
                /*getchar();*/
            }
            j=0;
            continue;
        }
    }
    
    return 0;
}