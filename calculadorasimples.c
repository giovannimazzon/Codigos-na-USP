#include <stdio.h>

int main()
{
    int a, b;
    float d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case'+':printf("%d",a+b);break;
        case'-':printf("%d",a-b);break;
        case'*':printf("%d",a*b);break;
        case'/':
        {
            if(b!=0)
            {
                d=(float)a/b;
                printf("%.2f\n",d);
            }
            else
            printf("Erro: divisao por zero");
            break;
        }
       default: printf("Erro: operacao invalida"); 
    }
}