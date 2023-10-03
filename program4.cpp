#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter no of rows of stars");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
		for(j=n-i;j>=0;j--)
		printf("*");
		printf("%d\n");
	}
	
	return 0;
}
