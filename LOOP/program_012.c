#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int n,square=2,res=1,i=0;
    printf("enter number\n");
    scanf("%d",&n);
    for(  ;res<=n ; i++){
        res=1;
        square=2;
        while(square){
            res*=i; 
            square--;           
        }
    }
    printf("%d\n",i-2);   
return 0;
}