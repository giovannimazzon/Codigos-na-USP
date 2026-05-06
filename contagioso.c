#include <stdio.h>

int main()
{
	int p, dor[10000], par=0, impar=0;
	scanf("%d",&p);
	for(int i=0; i<p; i++)
		scanf("%d",&dor[i]);
	for(int k=0; k<p; k++)
	{
		if((dor[k]%2==0)&&(dor[k]>0))
			par++;
		if(dor[k]%2!=0)
			impar++;
	}
	if(par>impar)
		printf("Pares\n");
	else
		printf("Impares\n");
}