//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int display(int addition)
{
printf("the sum of  all the given numbers after addition = %d\n",addition);
}

int compute(int array[],int size)
{
int addition = 0;
for(int i = 0;i<size;i++)
{
addition = addition + array[i];
}
