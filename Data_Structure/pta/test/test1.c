#include<stdio.h>
int main(void)
{
	int n,N,i,j;
	char c;
	scanf("%d %c",&N,&c);
	for(n=1;2*n*n-1<=N;++n);
	--n;
	for(i=n;i>0;--i)
	{
		for(j=0;j<n-i;++j)
			printf(" ");
		for(j=0;j<2*i-1;++j)
			printf("%c",c);
		printf("\n");
	}
	for(i=2;i<=n;++i)
	{
		for(j=0;j<n-i;++j)
			printf(" ");
		for(j=0;j<2*i-1;++j)
			printf("%c",c);
		printf("\n");
	}
	printf("%d",N-2*n*n+1);
	return 0;
}
