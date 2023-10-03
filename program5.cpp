#include<stdio.h>
int main()
{
		int i,j,n,t,s;
	printf("enter no of rows of stars");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=n-i;s>0;s--)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("*");
			for(t=0;t<i;t++)
		printf("*");
		printf("%d\n");
	}
		printf("%d\n");
	}
	
	

