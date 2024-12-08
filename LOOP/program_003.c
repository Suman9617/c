// multiplication table reverse order
#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    for (int i = 10; i >0; i--)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        
    }  
return 0;
}