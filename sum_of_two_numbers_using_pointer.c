#include<stdio.h>
#include<conio.h>
void main()
{
int first,second,*p,*q,sum;
printf("\nAddition of two numbers :\n");
printf("\nEnter first Number :");
scanf("%d",&first);
printf("\nEnter Second Number :");
scanf("%d",&second);
p=&first;
q=&second;
sum= *p+*q;
printf("\nsum of Entered Numbers = %d",sum);
getch();
}