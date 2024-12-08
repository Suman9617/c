// exact power of 2
#include<stdio.h>
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    printf("the exact power of 2 is %d\n",2<<(num-1));
    
return 0;
}