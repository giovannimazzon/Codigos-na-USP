#include <stdio.h>

int main()
{
    long long fatorial, legendre=5, aux=0;
    scanf("%lld",&fatorial);
    while (fatorial/legendre>0)
    {
        aux= aux + (fatorial/legendre);
        legendre= legendre*5;
    }
    printf("%lld", aux);
}