#include <stdio.h>
#include <conio.h>

int Fact(int n)
{
    if( n <= 1)
        return 1;
    return n * Fact(n - 1);
}

void main()
{
    int i = 0; 
    int j;   
    printf("Enter Number :");
    scanf("%d",&j);
    for(i = 0; i <= j; i++)
    {
       printf("\n%2d! = %d", i, Fact(i));
    }
 
    printf("\n\n");
 
   getch();
}
