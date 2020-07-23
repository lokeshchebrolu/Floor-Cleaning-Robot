#include"../floor/floor.h"
#include"..delay/delay.h/"
#include <stdio.h>

int main(void)
{
    print_floor();
    
    int j=0;
    for(int i=0;i<10;i++)
    {
        if(!j)
        {
            while(j<10)
            {
                floor[i][j]=1;
                j++;
                print_floor();
                delay(50);/* 1 second delay */
                /*getchar();*/
            }
            continue;
        
        if(!(j--^10))
        {
            while(j>=0)
            {
                floor[i][j]=1;
                j--;
                print_floor();
                delay(50);/* 1 second delay */
                /*getchar();*/
            }
            j=0;
            continue;
        }
    }
    
    return 0;
}
