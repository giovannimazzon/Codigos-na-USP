#include <stdio.h>

int main()
{
    double a1,b1,c1,a2,b2,c2;
    scanf("%lf %lf %lf",&a1,&b1,&c1);
    scanf("%lf %lf %lf",&a2,&b2,&c2);
    if((a1/a2)==(b1/b2)&&(a1/a2)==(c1/c2))
    printf("LD");
    else
    printf("LI");
}
