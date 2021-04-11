//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
int n;
int d;
};
type def struct fraction Fraction;

fraction 
get data(int i)
{
FractionFraction input;
printf("enter the number %d numerator %d denominator value:'.i)
scanf("%d",&Fractioninput.d);
return Fraction s[n])
{
for(int i=0;i<n;++)
{
[i]=getdata(i+1);
}
}
int
gcd(intn,intd)
{
if(d!=0)
retuyrn gcd(d,n%d):
else
return n;
Fraction
compeuetone(fraction s1,fraction s2)
{
fraction computevalue;
}
Fraction
computeN(int n,fraction s[n])
{
Fraction result;
result.n=0;
result.d=1;
for(int i=0;i<n;i++)
{
result computeone(result,s[i]);
}
result result;
}

int
getnumberofFraction()
{
int n;
printf("enter the number of fractions to be added:");
scanf("%d",&n);
return n;
}
void
displayoutput(Fraction sum,int n)
{
printf("the sum of %d Fraction is %d/%d",n,sum.n,sum.d);
}
int
main()
{
Fraction sumoffractions;
int n;
n=getnumberofFraction();
Fraction s[n];
getN(n,s);
sumofFraction=computen(n,s);
displayoutput(sumofFractions,n);
}
