#include <stdio.h>
int main()
{
    int b,size=7,p=0;
    int a[7] = {1, 3, 5, 7, 8, 9, 10};
    printf("Enter a number\n");
    scanf("%d",&b);
    for(int i=0;i<size;i++)
        {
            if(a[i]==b)
            {
                printf("%d is found index %d position",b,i);
                p=1;
                break;
            }

        }
        if(p==0)
            printf("%d is not found",b);
}