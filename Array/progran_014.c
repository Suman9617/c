
#include <stdio.h>
int largest(int[], int);

int main()
{
    int a[7] = {1, 7, 5, 19, 4, 8, 9};
    int length = 7;
    int max;
    max = largest(a, length);
    printf("%d\n", max);
}
int largest(int a[], int length)
{
    int big = 0, big2 = -1;
    for (int i = 0; i < length; i++)
    {
        if (a[big] < a[i + 1])
            big = i + 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (a[i] != a[big])
        {
            if (big2 == -1)
                big2 = i;
            else if (a[big2] < a[i])
                big2 = i;
        }
    }
    return a[big2];
}
