#include <stdio.h>

int main()
{
    int a[6], flag = 1;
    printf("Enter array element :\n");
    for (int i = 0; i < 6; i++)
        scanf("%d",&a[i]);
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Array is sorted\n");
    else
        printf("Array is not sorted\n");
}
