#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    printf("\t*** student Details ***\n");
    char Name;
    int Roll;
    float Marks;
    printf("\t Name -");
    gets("Name");
    printf("\t Name -%s\n",Name);
    printf("\t Roll No -");
    scanf("%d\n",Roll);
    printf("\t Roll No -%d",Roll);
    getche();
}