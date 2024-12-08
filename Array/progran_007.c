//array any number delete :
#include <stdio.h>
int newarray(int[], int, int);
int main()
{
    int arr[10] = {1, 6, 7, 4, 5}, a, size;
    int length = 5;
    printf("Enter any number\n");
    scanf("%d", &a);
    size = newarray(arr, a, length);
    for (int i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
int newarray(int arr[], int a, int length)
{
    int i = 0, pos = 0;
    for (; i < length; i++)
    {
        if (arr[i] != a)
        {
            pos++;
        }
        else if (arr[i] == a)
            break;
    }
    for (int i = pos; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return length - 1;
}
