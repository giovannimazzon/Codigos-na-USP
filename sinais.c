#include <stdio.h>
void RTern(long long n)
{
    if(n==0) return;
    RTern(n/3);
    printf("%lld",n%3);
}

int main()
{
    long long npd=0, soma=0;
    int c,lq=0;
    while((c=getchar())!= EOF)
    {
        if(c>='0'&&c<='2')
        {
            npd=(npd*3)+(c-'0');
            lq=1;
        }
        else if(lq)
            break;
    }
    for(int i=0; i<npd; i++)
    {
        long long va=0;
        int ld=0;
        while((c=getchar())!=EOF)
        {
            if(c>='0'&&c<='2')
            {
                va=(va*3)+(c-'0');
                ld=1;
            }
            else if(ld)
            break;
        }
        soma+=va;
    }
    if(soma==0)
        printf("%lld",soma);
    else
    {
        RTern(soma);
    }
    printf("\n");
}