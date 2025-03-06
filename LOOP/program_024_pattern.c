#include<stdio.h>
int main(){
     int n;
     scanf("%d",&n);
      int a=n;
     for(int i=0;i<2*n-1;i++){
         for(int j=0;j<2*n-1;j++){
             printf("%d",a);
             a=(i>j)?a-1:a;
             a=((i+j)>=2*n-2)?a+1:a;
         }
         printf("\n");
         a=n;
     }
}