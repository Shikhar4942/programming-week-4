#include<stdio.h>
int main()
{
		int i,j,n,s,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		for(s=2*(n-i-1);s>0;s--)
		printf(" ");
		for(t=0;t<i+1;t++)
		printf("*");
		
		printf("%d\n");
	
		
}
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		printf("*");
			for(s=0;s<2*i;s++)
		printf(" ");
		for(t=n-i;t>0;t--)
		printf("*");
		
		printf("%d\n");
	}
	
}
