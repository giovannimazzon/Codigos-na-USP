#include <stdio.h>

int main()
{
	int n,m, bit, r=0;;
	long long val_n=0, val_m=0, a, b;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&bit);
		if(bit==1)
			val_n|=(1LL<<(n-1-i));
	}
	for(int k=0; k<m; k++)
	{
		scanf("%d",&bit);
		if(bit==1)
			val_m|=(1LL<<(m-1-k));
	}
	scanf("%lld %lld",&a, &b);
	long long resultado2[3]={a|b,a&b,a^b};
	printf("%lld\n",val_n|val_m);
	printf("%lld\n",val_n&val_m);
	printf("%lld\n",val_n^val_m);
	printf("\n");
	for(int s=0; s<3; s++)
	{
		r=0;
		if(resultado2[s]==0)
			printf("0\n");
		else
		{
			for (int i = 31; i >= 0; i--) 
			{
                int bit = (resultado2[s] >> i) & 1;
                if (bit == 1) 
                	r = 1;
                if (r) 
                	printf("%d", bit);
            }
            printf("\n");
		}
	}
}