//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
int n;
int d;
};
typedef struct fraction Fraction;

Fraction
getdata(int i)
{
Fraction Fractioninput;
printf("enter the number %d numerator value:",i)
scanf("%d",&Frcationinput.n);
printf("enter the number %d denominator value:",i)
scanf("%d",&Fractioninput.d);
return Fractioninput;
}

void
getN(int n,Fraction s[n])
{
for (int i=0;i<n;i++)
{
[i]=getdata (i+1);
  }
}
int
gcd(intn,intd)
{
if(d!=0)
return gcd(d,n%d);
else
return n;
Fraction
compuetone(Fraction s1,Fraction s2)
{
Fraction computevalue;
int gcdvalue;
computevalue.n=(s1.n*s2.d)+(s1.d*s2.n);
computevalue.d=(s1.d*s2.d);
gcdvalue=gcd(computevalue.n,computevalue.d);
computevalue.n=(computevalue.n/gcdvalue);
computevalue.d=(computevalue.d/gcdvalue);
return computevalue;
}
Fraction
computeN(int n,Fraction s[n])
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
Fraction sumofFractions;
int n;
n=getnumberofFraction();
Fraction s[n];
getN(n,s);
sumofFraction=computeN(n,s);
displayoutput(sumofFractions,n);
}
