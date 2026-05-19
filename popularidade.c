#include <stdio.h>

int main ()
{
char string[191];
int teto =0, miku =0;
scanf("%s", string);
for(int i=0; i<190; i++)
{
    if ( string[i] == '\0' || string[i]=='\n')
        break;
    else if(string[i]=='T' && string[i+1] =='E' && string[i+2] =='T' && string[i+3] == 'O')
    {
        teto ++;
        i += 3;
    }
    else if(string[i]=='M' && string[i+1] =='I' && string[i+2] =='K' && string[i+3] == 'U')
    {
        miku ++;
        i += 3;
    }
}
if(miku > teto)
    printf("Miku");
else if(teto > miku)
    printf("Teto");
else
    printf("Empate");
}