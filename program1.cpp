#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter no of rows of stars");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		printf("%d\n");
	}
	
	return 0;
}
