#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=(b*b)-4*a*c;
    if(delta>0)
    {
        x1=((-b)-sqrt(delta))/(2*a);
        x2=((-b)+sqrt(delta))/(2*a);
        printf("Raízes: %.3lf %.3lf",x1,x2);
    }
    else if(delta==0)
    {
        x1=(-b)/(2*a);
        printf("Raiz: %.3lf",x1);
    }
    else
    printf("Não há raízes reais.");
}