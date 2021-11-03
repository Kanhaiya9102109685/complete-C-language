#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE*fp;
    if(fp = fopen("baba.text","r"))
    {
        ch=getc(fp);
        while(ch !=EOF)
        {
            putc(ch,stdout);
            ch=getc(fp);
        
        }
        fclose(fp);
        return 0;
    }
    return 0;
}