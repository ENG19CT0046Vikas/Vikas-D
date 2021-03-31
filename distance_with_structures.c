//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct point
{
  float x1,x2,y1,y2;
}
a,b;
 
float output(float first point,float second point)
{
  float distance;
  distance = sqrt(firstpoint*firstpoint + secondpoint*secondpoint);
  return distance;
}
  
int main()
{
float first point,second point,Distance;
printf("For the first point:\n");
printf("Enter the value for X:\n");
scanf("%f",&v.x1);
printf("Enter the value for Y:\n");
scanf("%f",&v.y2);
  
printf("For the second point:\n");
printf("Enter the value For X;\n");
scanf("%f",&j.x2);
printf("Enter the value For Y:\n");
scanf("%f",&j.y2);

firstpoint = j.x2 - a.x1;
secondpoint = j.y2 - a.y1;
  
distance = Output(firstpoint,secondpoint);
  
printf("the distance between the two points %f and %f: %f\n",firstpoint,secondpoint,Distance);
  
  return 0;
}
  


