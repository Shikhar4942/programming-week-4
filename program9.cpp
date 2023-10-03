#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter no of rows you want to print");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			for(s=0;s<i;s++)
		{
			printf(" ");
		}
		for(j=n;j>0;j--)
		{
			printf("*");
		}
	
	printf("%d\n");

}
	return 0;
}

