#include <stdio.h>

int main() {
    long long a;
    int n;
    scanf("%d %lld", &n, &a);
    long long *B = &a;
    long long *C = &a;
    for (int i = 0; i < n; i++) 
    {
        char p, op;
        long long y;
        scanf(" %c %c %lld", &p, &op, &y);
        long long *ptr_usado = (p == 'B') ? B : C;
        if (op == '+') 
        {
            *ptr_usado += y;
        } 
        else if (op == '-') 
        {
            *ptr_usado -= y;
        } 
        else if (op == '*') 
        {
            *ptr_usado *= y;
        } 
        else if (op == '/') 
        {
            if (y != 0) {
                *ptr_usado /= y;
            }
        }
    }
    printf("%lld\n", a);
}