#include <stdio.h>
int main()
{
    int b, size = 7, team, x = 1;
    int a[7] = {1, 3, 5, 7, 18, 17, 10};
    int d[7] = {1, 3, 15, 7, 8, 17, 11};
   /* for (int i = 0; i < size; i++)
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
    {
        for (int j = i + 1; j < size; j++)
        {
            if (d[i] > d[j])
            {
                team = d[i];
                d[i] = d[j];
                d[j] = team;
            }
        }
    }*/

    int k[size];
    for (int i = 0; i < size; i++)
    {

        if (i < size)
        {
            k[i] = a[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        int flag = 1;
        for (int j = 0; j < size; j++)
        {
            if (d[i] == a[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            k[size - 1 + x] = d[i];
            x++;
        }
    }
    for (int i = 0; i < size - 1 + x; i++)
    {
        for (int j = i + 1; j < size - 1 + x; j++)
        {
            if (k[i] > k[j])
            {
                team = k[i];
                k[i] = k[j];
                k[j] = team;
            }
        }
    }

    for (int i = 0; i < size - 1 + x; i++)
        printf("%d\t", k[i]);
    printf("\n%d", size - 1 + x);
}
