/Write a program to add two user input numbers using 4 functions.
#include<stdio.h>

int first_num()
{
    int num1;
    printf("enter the first number:\n");
    scanf("%d",&num1);
    return num1;
}

int second_num()
{
    int num2;
    printf("enter the second number:\n");
    scanf("%d",&num2);
    return num2;
}

int add_two_numbers(int first_num ,int second_num)
{
    return first_num+second_num;
}
int main()
{
    int a=first_num();
    int b=second_num();
    int sum=add_two_numbers(a,b);
    printf("Sum of the two numbers %d and %d is = %d\n",a,b,sum);
    return 0;
}
