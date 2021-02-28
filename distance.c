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
    float a1,a2,b1,b2,x,y,dist;
    printf("For The First point:\n");
    printf("Enter The Value for X:\n");
    a1 = input();
    printf("Enter the Value For Y:\n");
    b1 = input();
    
    printf("For The Second point:\n");
    printf("Enter the Value For X:\n");
    a2 = input();
    printf("Enter the Value For Y:\n");
    b2 = input();
    
    x = (a2 - a1);
    y = (b2 - b1);
    
    dist = calc_dist(x, y);
    show_output(x,y,dist);

    return 0;
}
