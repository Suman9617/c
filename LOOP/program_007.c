// x rise in power of y 
#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int x,y,res=1;
    printf("enter x\n");
    scanf("%d",&x);
    printf("enter y\n");
    scanf("%d",&y);
    while(x){
        res*=y;
        x--;
    }
    printf("%d\n",res);   
return 0;
}