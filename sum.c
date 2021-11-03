#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int cumsum=0;
    int i;
    for(i=1;i<=100;i++)
    {
        cumsum=cumsum + i;
    }
    printf("the cumulative sum up to 100 is %d\n", cumsum);
    getch();
}