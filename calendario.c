#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0)
    printf("e ano bissexto");
    else
    {
        if(a%4==0&&a%100!=0)
        printf("e ano bissexto");
        else
        printf("nao e ano bissexto");
    }
}