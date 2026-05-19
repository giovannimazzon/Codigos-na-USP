#include <stdio.h>

int main()
{
    int HP, i=0;
    char Ataques[101], c;
    scanf("%d", &HP);
    while(getchar()!='\n');
    while(i<100)
    {
        c=getchar();
        if(c=='\n'||c==EOF)
        break;
        Ataques[i]=c;
        i++;
    }
    for(int k=0; k<=i; k++)
    {
        if(Ataques[k]=='C')
        HP-=30;
        if(Ataques[k]=='A')
        HP-=10;
        if(Ataques[k]=='R')
        HP=HP;
        if(HP<=0)
        {
            printf("Desmaiou");
            break;
        }
    }
    if(HP>0)
    printf("Sobreviveu com %d HP", HP);
}