#include <stdio.h>

int main()
{
    char C, c;
    int N, acerto=0, i=0;
    scanf(" %c%d",&C,&N);
    char str[101];
    while(getchar()!='\n');
    while(i<100)
    {
        c=getchar();
        if(c=='\n' || c==EOF)
        break;
        str[i]=c;
        i++;
    }
    str[i]='\0';
    for(int k=0; str[k]!='\0'&&str[k+1]!='\0'; k+=2)
    {
        char CS = str[k];
        int NS = str[k+1] - '0';
        if(CS==C&&NS==N)
        {
            printf("Fomos atingidos!\n");
            acerto = 1;
        }
    }
    if(acerto==0)
        printf("Oceano tranquilo!\n");
}