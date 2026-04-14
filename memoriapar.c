#include <stdio.h>

int main()
{
    short unsigned int a, b, c;
    unsigned long long r=0;
    scanf("%hu %hu %hu", &a, &b, &c);
    a=a&~1;
    b=b&~1;
    c=c&~1;
    r=(unsigned long long)a|((unsigned long long)b<<16)|((unsigned long long)c<<32);
    printf("%llu\n",r);
}