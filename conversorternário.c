#include <stdio.h>

int main()
{
    char n[20];
    int aux;
    aux=0;
    scanf("%s",&n);
    for (int k=0; n[k]!='\0'; k++)
    {
        aux=(aux*3)+(n[k]-'0');
    }
    printf("%d", aux);
}
