#include <stdio.h>
void descriptografar(char *s)
{
    for(int k=0;s[k]!='\0';k++)
    {
        char c=s[k];
        if(c>='a'&&c<='z')
        s[k]='a'+'z'-c;
        else if(c>='A'&&c<='Z')
        s[k]='A'+'Z'-c;
    }
}
int main()
{
    char s[49];
    scanf("%s",&s);
    descriptografar(s);
    printf("%s",s);
}