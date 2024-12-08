#include <stdio.h>
int main()
{
    int b, size = 7, k, team;
    int a[7] = {1, 3, 5, 7, 18, 17, 10};

    int max;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                k = j;
                break;
            }
        }
    }
    team = a[0];
    a[0] = a[k];
    a[k] = team;
     int max2,p;
    for (int i = 1; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                max2 = a[j];
                p = j;
                break;
            }
        }
    }

    printf("the max element  %d   %d\n", max, k);
   printf("the 2nd max element  %d   %d\n", max2, p);

}