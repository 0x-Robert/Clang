/*Prints int and float values in various formats */

#include <stdio.h>

int main(void ){
    int i;
    float x;
    i = 40;
    x= 839.21f;


    printf("|%d|%5d|%5.3dl\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10gl\n",x,x,x);

    return 0;
    
}