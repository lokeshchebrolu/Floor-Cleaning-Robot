/* check 'man console_codes' for full details
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
