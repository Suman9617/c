#include <stdio.h>
int main()
{
    int b, size = 7, team;
    int a[7] = {0,1,1,0,1,0,0};

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                team = a[i];
                a[i] = a[j];
                a[j] = team;
            }
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);
}