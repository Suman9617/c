#include <stdio.h>
int newarray(int[],int);
int main()
{
    int a[6],size,length=6;
    printf("Enter array element :\n");
    for (int i = 0; i < 6; i++)
        scanf("%d",&a[i]);
   size=newarray(a,length);
   
       
}        