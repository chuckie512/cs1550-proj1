
/*
 * (c) cas275@pitt.edu September 2015
 *
 * A simple graphics library for CS1550
 */

#include<time.h>

void init_graphics(){
    //TODO
}

void exit_graphics(){
    //TODO
}

void clear_screen(){
    //this works, but is 4 right?
    write(1, "\033[2J",4);
}

char getkey(){
    //TODO
}

void sleep_ms(long ms){
    //TODO
    struct timespec time;
    time.tv_sec=ms/1000;
    time.tv_nsec=ms%1000;
    nanosleep(&time, NULL);
}

/*
void draw_pixel(int x, int y, color_t color){
    //TODO
}
*/

