#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,1,1,1,1,1,1,1,1};
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{ int sum=0;
		 for(int k=0;k<3;k++)
		 { 
		 sum=sum+a[j][k]*b[k][j];
		 	
		 }
		 c[i][j]=sum;
		}
	}
	for(int k=0;k<3;k++)
	{
		for(int r=0;r<3;r++)
		{
			printf("%d\t",c[k][r]);
		}
		printf("\n");
	}
	
}

