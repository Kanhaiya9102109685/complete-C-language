#include<stdio.h>
#include<conio.h> 
 int main()
{ 
    int Year;
     printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &Year);
    if ( Year%400 == 0)
    {
    printf("%d is a leap year.\n", Year);
    }
    else if ( Year%100 == 0)
    {
    printf("%d is not a leap year.\n", Year);
    }  
    else if ( Year%4 == 0 )  
    {
    printf("%d is a leap year.\n", Year);
    }
    else 
    {
    printf("%d is not a leap year.\n", Year); 
    } 
 return 0;  
}