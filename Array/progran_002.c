#include<stdio.h>
int main(){
	int a[3][3];
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int k=0;k<3;k++)
	{
		for(int r=0;r<3;r++)
		{
			printf("%d\t",a[k][r]);
			sum+=a[k][r];
		}
	}printf("\n");
	printf(" array sum is :%d",sum);
}
