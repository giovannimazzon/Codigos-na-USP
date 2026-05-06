# include <stdio.h>

int main()
{
	char nome1[19], nome2[19], i=0, igual=1;
	scanf("%s",nome1);
	scanf("%s",nome2);
	while(nome1[i]!='\0'||nome2[i]!='\0')
	{
		if(nome1[i]!=nome2[i])
		{
			igual=0;
			break;
		}
		i++;
	}
	if(igual)
		printf("Sou eu\n");
	else
		printf("Nao sou eu\n");
}