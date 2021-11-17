/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void){


    int height;
    int length;
    int width;
    int volume;
    int weight;


    height=8;
    length=12;
    width=10;


    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimentions : %dx%dx%dx\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimentional weight (pounds): %d\n", weight);

    printf("TEST :%d\n", height+length+width);
    return 0;

}