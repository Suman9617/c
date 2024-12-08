#include <stdio.h>
int main()
{
    int b, size = 10, team;
    int a[10] = {1, 3, 5, 7, 18, 17, 10,3,5,18};

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i]==a[j])
            {
                for(int k=j;k<size;k++)
                {
                    a[k]=a[k+1];
                }
                size--;
            }
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);
}