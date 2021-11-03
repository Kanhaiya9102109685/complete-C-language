#include<stdio.h>
#include<conio.h>
void main()
{
     int row,col,n;

     printf("enter the number of row :");
     scanf("%d",&n);
     for(;row<=n;row++)
    {
     for(col=1;col<=row;col++)
    {
     printf("* ");
    
    }
     printf("\n");
    }
     getch();
}