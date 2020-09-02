#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("Simple Calculator\n");
printf("Enter Number 1 : ");
char a[2000];
gets(a);
int r=atoi(a);
if(r<10100010000)
{printf("Enter Number 2 : ");
char b[2000];
gets(b);
int h=atoi(b);
if(h<1000000000)
{
printf("Enter Operator To Do With Num1 then Num2 : ");
char c;
scanf(" %c", &c);
switch(c)
{
case '/'  :
printf("%d\n\n", r/h);
break;
 case '*'  :
printf("%d\n\n", r*h);
break;
case '+'  :
printf("%d\n\n", r+h);
break;
case '-'  :
printf("%d\n\n", r-h);
break;

}
}


}


return 0;
}