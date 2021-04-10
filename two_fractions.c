//WAP to find the sum of two fractions.
#include<stdio.h>
struct Fraction
{
	int numerator,denominator;
}fraction1,fraction2;

int input()
{
	printf("For The First Fraction:\n");
	printf("Enter the Numerator Value:\n");
	scanf("%d",&fraction1.numerator);
	printf("Enter the denominator Value:\n");
	scanf("%d",&fraction1.denominator);

	printf("For The Second Fraction:\n");
	printf("Enter the Numerator Value:\n");
	scanf("%d",&fraction2.numerator);
	printf("Enter the denominator Value:\n");
	scanf("%d",&fraction2.denominator);
}

int output(int f1Numerator, int f1Denominator, int f2Numerator, int f2Denominator, int Num, int Den)
{
	printf("The addition of two fractions when the First Fraction is %d/%d and the Second Fraction is %d/%d is: %d/%d\n", f1Numerator, f1Denominator, f2Numerator, f2Denominator, Num, Den);
}

int gcd (int Num, int Den)
{
	if (Den==0)
	{
		return Num;
	}
	
	return gcd(Den, Num % Den);
}

int calculationAdd (int fraction1Numerator, int fraction1Denominator, int fraction2Numerator, int fraction2Denominator)
{
	int num, den, GCD;
		
	num = (fraction1Numerator * fraction2Denominator) + (fraction1Denominator * fraction2Numerator);

	den = fraction1Denominator * fraction2Denominator;

	GCD = gcd(num,den);

int num1 = num/GCD;
int den1 = den/GCD;

output(fraction1Numerator, fraction1Denominator, fraction2Numerator, fraction2Denominator, num1, den1);
}

int main()
{
	input();
	calculationAdd (fraction1.numerator, fraction1.denominator,fraction2.numerator, fraction2.denominator);
	return 0;
}
