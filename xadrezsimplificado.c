#include <stdio.h>

int main()
{
    char P;
    int X1, Y1, X2, Y2, aux;
    scanf("%c %d %d %d %d",&P,&X1,&Y1,&X2,&Y2);
    switch(P)
    {
        case'B':
        {
            if(X1<X2)
            {
                aux=X1;
                X1=X2;
                X2=aux;
            }
            if(Y1<Y2)
            {
                aux=Y1;
                Y1=Y2;
                Y2=aux;
            }
            if((X1-X2)==(Y1-Y2))
            printf("Movimento valido");
            else
            printf("Movimento invalido");
            break;
        }
        case'T':
        {
            if(X1<X2)
            {
                aux=X1;
                X1=X2;
                X2=aux;
            }
            if(Y1<Y2)
            {
                aux=Y1;
                Y1=Y2;
                Y2=aux;
            }
            if((X1-X2==0||Y1-Y2==0)&&!(X1==X2&&Y1==Y2))
            printf("Movimento valido");
            else
            printf("Movimento invalido");
            break;
        }
    }
}