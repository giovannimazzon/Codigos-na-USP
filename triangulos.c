#include <stdio.h>

int main()
{
    float a, b, c,x;
    scanf("%f %f %f",&a,&b,&c);
    if (a<b)
    {
        x=a;
        a=b;
        b=x;
    }
    if (a<c)
    {
        x=a;
        a=c;
        c=x;
    }
    if (a<(b+c))
    printf("Triangulo Valido");
    else
    printf("Triangulo Invalido");
}