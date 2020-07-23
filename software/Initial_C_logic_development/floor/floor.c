#include"floor.h"
#include"../output_screen/output_screen.h"

/* Making whole floor clean by initializing with 0
 * 0 represents Tile is uncleans or empty having no obstacles*/
int floor[FLOOR_WIDTH][FLOOR_HEIGHT]={0};

void print_floor(void)
{
    clear();/* Clear output screen */
    goto(1,1);/* Move cursor to starting */
    for(int i=0;i<FLOOR_WIDTH;i++)
    {
        for(int j=0;j<FLOOR_HEIGHT;j++)
            printf(" %d ",floor[i][j]);
        printf("\n");
    }
}
