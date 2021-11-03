#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    int num,reverse=0,rem;
    printf("Enter a number for find reverse\n");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }

    printf("Reverse number %d\n",reverse);
    getch();
}