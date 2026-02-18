#include<ncurses.h>
#include<unistd.h>

#define DELAY 80000

int main(){
   initscr();
   noecho();
   curs_set(FALSE);
   
   int max_y = 0;
   int max_x = 0;

   box(stdscr,10,10);

   getmaxyx(stdscr,max_y,max_x);

   const char *man[] = {
       "    o o o",
       "  o       o o ____ ",
       " o           \\   \\ ",
       "o             \\___\\",
       "o                _// \\",
       " o          o    \\_   \\",
       "  o        o        \\  \\",
       "   o o o o           \\  \\ " ,
       "                      \\  \\ ",
       "                      //  // ",
       "                     //  //  ",
       "     _----__        //  //   ",
       "    |       \\     //  //    ",
       "    |         |   [     ]    ",
       "    |         /   |     |    ",
       "     \\___    \\__/    /   ",
       "    ---                |   ",
       "   /  \\               |   ",
       "  /    |              |    ",
       " |     |              |    ",
       " |    /               |    ",
       " |   \\               |    ",
       " |    | \\            |    ",
       " |    |  \\           |    ",
       " |    |   \\----------|    ",
       " \\   |    -----------     ",
       "  |   |   /           \\   ",
       "  |   |  /             \\  ",
       "  \\  | /               \\ ",
       "   \\  \\___              | ",
       "    \\______/  |          |     ",
       "     / _______/ \\_______/\\ ",
       "    /      /       \\      \\ ",
       "   /      /         \\      \\ ",
       "  /      /           \\      \\ ",
       "  /     /              \\      \\",
       " /     /                \\      \\",
       "/     /                  \\      \\",
    "  /    /                     \\      \\",
    " /    /                       \\     \\ ",
    "/    /                         \\     \\ ",
   "/    /                           \\     \\ ",
   "\\_ /                              /____/  ",
   " / \\                              /    \\ ",
   "/   \\                             |     /   ",
   "_____/                              \\///   ",



   };

   int man_height = 20;
   int man_width = 20;

   for(int x = 0 ; x < max_x - man_width;x++){ 
       clear();

       for(int i = 0 ; i < man_height ; i++){
           mvprintw(max_y/2+i,x,"%s",man[i]);
       }

       refresh();
       usleep(DELAY);
   }

   endwin();

   return 0;
}


