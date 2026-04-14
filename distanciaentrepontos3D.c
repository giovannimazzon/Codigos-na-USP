#include <stdio.h>
#include <math.h>

int main()
{
    double xp, yp, zp, xc, yc, zc, r ,dx, dy, dz, D;
    scanf("%lf %lf %lf", &xp, &yp, &zp);
    scanf("%lf %lf %lf", &xc, &yc, &zc);
    scanf("%lf", &r);
    dx=xc-xp;
    dy=yc-yp;
    dz=zc-zp;
    D=sqrt(dx*dx+dy*dy+dz*dz);
    if (D>r)
    printf("externa\n");
    else if (D==r)
    printf("pertence\n");
    else
    printf("interna\n");
}
