// prime number
#include<stdio.h>
int main()
{
    int num,flag=1;
    printf("Enter number\n");
    scanf("%d",&num);
    if (num<=1)
    {
        //printf("prime\n");
        
    }
    else if (num==2)
    {
        printf("prime\n");
        
    }
    else if (num>2)
    {
        for (int i = 2; i <= num/2; i++)    
        {
            if(num%i==0)
            {
                flag=0;
                break; 
            }  
        }
    }
    if(flag)
        printf("prime\n");
    else
        printf("composite\n");           
    
    
    
    
return 0;
}