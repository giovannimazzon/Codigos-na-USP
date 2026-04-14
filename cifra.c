#include <stdio.h>

int main()
{
    char palavra[3];
    scanf("%s",palavra);
    int x;
    for(int k=0; k<3; k++)
    {
        x=(int)palavra[k];
        printf("%d",x);
    }
}