#include<stdio.h>
 int main(){
 	int a[6],team,n,p=1;
 	printf("Enter array element\n");
 	for(int i=0;i<6;i++)
 	{
 		scanf("%d",&a[i]);
	 }
 	
 	for(int i=0;i<6;i++)
 	{ for(int j=i+1;j<6;j++)
 	  if(a[i]>a[j]){
 	  	 
 	  	 team=a[i];
 	  	 a[i]=a[j];
 	  	 a[j]=team;
	   }
 		
     }
     printf("MAX NUM %d\n",a[5]);
      printf("MIN NUM %d\n",a[0]);
}
