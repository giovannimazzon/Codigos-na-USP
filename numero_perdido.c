#include <stdio.h>

int main()
{
    long n, valor, misterioso, soma_esperada=0, soma_real=0;
    scanf("%ld\n",&n);
    soma_esperada=(n*(n+1))/2;
    for(int k=0; k<n-1; k++)
    {
        scanf("%ld",&valor);
        soma_real+=valor;
    }
    misterioso=soma_esperada-soma_real;
    printf("%ld",misterioso);
}