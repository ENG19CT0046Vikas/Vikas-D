//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include<math.h>

float input()
{
    float temp;
    scanf("%f",&temp);
    return temp;
}

float calc_dist(float a,float b)
{
    float result;
  
	result = sqrt(a*a + b*b);
	return result;
}   

void show_output(float x, float y, float output)
{
    printf("The distance between the points %f and %f is %2f",x,y,output);
}

int main()
{
    float x1, x2, y1, y2,x,y,dist;
    printf("For The First point:\n");
    printf("Enter The Value for X:\n");
    x1 = input();
    printf("Enter the Value For Y:\n");
    y1 = input();
    
    printf("For The Second point:\n");
    printf("Enter the Value For X:\n");
    x2 = input();
    printf("Enter the Value For Y:\n");
    y2 = input();
    
    x = (x2 - x1);
    y = (y2 - y1);
    
    dist = calc_dist(x, y);
    show_output(x,y,dist);

    return 0;
}
