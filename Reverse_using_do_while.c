#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

void main()
{
    int num,reverse=0,rem;
    printf("Enter a number for find reverse\n");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    do
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    while(num!=0);
    printf("Reverse number %d\n",reverse);
    getch();
}