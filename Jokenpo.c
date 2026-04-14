#include <stdio.h>

int main()
{
    int E, D;
    scanf("%d %d",&E,&D);
    switch(E)
    {
        case 0:
        {
            if(D==0)
            printf("Empate");
            else if(D==1)
            printf("Esquerda");
            else
            printf("Direita");
            break;
        }
        case 1:
        {
            if(D==0)
            printf("Direita");
            else if(D==1)
            printf("Empate");
            else
            printf("Esquerda");
            break;
        }
        case 2:
        {
            if(D==0)
            printf("Esquerda");
            else if(D==1)
            printf("Direita");
            else
            printf("Empate");
            break;
        }
    }
}