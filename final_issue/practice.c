//
//  practice.c
//  prg2019
//
//  Created by k19061kk on 2019/07/11.
//

#include <stdio.h>
#include <curses.h>

int main( int argc, char *argv[] )
{
    int i;
    initscr();
    clear();
    for( i = 0; i < LINES; i++ ) {
        move(i,i+1);
        if( i%2 == 1 )
            standout();
        addstr("Hello, world");
        if( i%2 == 1 )
            standend();
    }
    refresh();
    getch();
    endwin();
    return 0;
}
