//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>

float input()
{
    float temp;
    scanf("%f",&temp);
    return temp;
}


float calc_vol(float h, float b, float d)
{
    return ((h * d * b) + ( d / b)) / 3;
}


void show_output(float h, float b, float d, float volume)
{
    printf("The Volume of the tromboloid when Height %f, Breadth %f and Depth %f is: %2f\n", h,b,d,volume);
}


int main()
{
    float h,b,d,vol;
    printf("Enter the Height of the tromboloid:\n");
    h = input();
    
    printf("Enter the Breadth of the tromboloid:\n");
    b = input();
    
    printf("Enter the Depth of the tromboloid:\n");
    d = input();
    
    vol = calc_vol(h, b, d);
    
    show_output(h,b,d,vol);
    
    return 0;
}
