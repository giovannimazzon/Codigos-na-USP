#include <stdio.h>

int main()
{
    long long t, h, d, x;
    char s;
    scanf("%lld %c",&t,&s);
    printf("Decomposição do setor %c\n",s);
    t=t/3600000000;
    h=t%24;
    d=t/24;
    x=d/7;
    d=d%7;
    printf("%lld Semana(s)\n%lld Dia(s)\n%lld Hora(s)\n",x,d,h);
}