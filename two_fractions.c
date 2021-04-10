//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction
{
int numerator,denominator;
}
fraction 1,fraction2;
int input()
{
printf("For the first fraction:\n");
printf("Enter the numerator value:\n");
scanf("%d",&fraction1.numerator);
printf("Enter the denominator value:\n");
scanf("%d",&fraction1.denominator);

printf("For the second Fraction:\n");
Print("Enter the numerator value;\n");
scanf("%d",&fraction2.numerator);
printf("Enter the denominator value:\n");
scanf("%d",&fraction2.denominator);
}


 int output(int f1Numerator,int f1Denominator,int f2Numerator,int Num,int Den)
{
return Num;
}

return gcd(Den,Num%Den);
}

int calculationAdd (int fraction1Numerator,int fraction1Denominator,int fraction2Numerator,int fraction2Denominator)
{
int num,den,GCD;

num=(fraction1numerator*fraction2Denominator)+(fraction1Denominator*fraction2Numerator);

den=fraction1Denominator*fraction2Denominator;

GCD=gcd(num,den);

int num1=num/GCD;
int den1=den/GCD;

output(fraction1Numerator,fraction2Numerator,fraction2Numerator,fraction2Denominator,num1,den1);
}
int main()
{
input()
calculationAdd(fraction1.numerator,fraction1,denominator,fraction2.numerator,fraction2.denominator);
return 0;
}
