#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define HALF 1/2
int main()
{
printf("\nTriangle Area Calculator(For Scalene Trinagle Enter S or For Traingle With Base And Heigth Enter B\n");
char f;
printf("Enter Letter : ");
scanf("%c", &f);
if(f=='b'||f=='B')
{
double a;
double b;
printf("Enter Height : ");
scanf("%lf",&a);
printf("Enter Base : ");
scanf("%lf", &b);
double c;
c=HALF*a*b;
printf("The Area Of A Triangle With Base And Height Is : %f\n\n\n", c);
}
else if(f=='s'||f=='S')
{
double a; 
double b;
double c;
printf("Enter Side 1 : ");
scanf("%lf", &a);
printf("Enter Side 2 : ");
scanf("%lf", &b);
printf("Enter Side 3 : ");
scanf("%lf", &c);
double s;
s=(a+b+c)/2;
double h;
h=(s-a)*(s-b)*(s-c);
double k;
k=h*s;
printf("The Area For Your Triangle Is : %f\n\n", k);
}
else
{
printf("Wow Trying To Hax A Programmer, Gomma Get Lost\n\n");
}
return 0;
}