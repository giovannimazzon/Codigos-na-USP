#include <stdio.h>

int main()
{
    long indice, fib=1, fib1=1, fib2=1, aux=0;
    scanf("%ld",&indice);
    if(indice==0)
    printf("0");
    else if(indice<=2)
    printf("1");
    else
    {
        for(int i=3; i<=indice; i++)
        {
            aux = fib;
            fib = fib1 + fib2;
            fib2 = fib;
            fib1 = aux;
        }
        printf("%ld\n",fib);
    }
}