#include <stdio.h>

int main()
{
    int N;
    double M, T;
    scanf("%d %lf",&N,&M);
    T=0;
    switch(N)
    {
        case 1:
        {
            T=100+10*M;
            if(M>500)
            T=T*1.2;
            printf("Tarifa: %.2lf",T);
            break;
        }
        case 2:
        {
            T=50;
            if(M>100)
            T=T+10;
            printf("Tarifa: %.2lf",T);
            break;
        }
        case 3:
        printf("Tarifa: %.2lf",T);
        break;
        default:
        printf("Entrada Inválida");
        break;
    }
}    