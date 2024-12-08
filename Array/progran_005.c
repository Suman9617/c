#include <stdio.h>
int main()
{
    int b, size = 8, team;
    int a[8] = {1, 3, 5, 7, 18, 9, 10, 11};
    for (int i = 0; i < size / 2; i++)
    {
        team = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = team;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}