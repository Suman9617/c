#include <stdio.h>
int main()
{
    int b, size = 7, team,flag=1;
    int a[7] = {1, 3, 5, 7,18, 9, 10};
    printf("enter a number\n");
    scanf("%d", &b);
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

    int low = 0;
    int high = size - 1;
    while (low<high )
    {
        if (a[high] == b)
           { printf("number is found in index %d",high);
                
               break;
                }
        if (a[low] == b){
            printf("number is found in index %d",low);
            
            break;
            }
        if (a[(high + low) / 2] == b){
            printf("number is found in index %d",(high+low)/2);
              
              break; 
                }
        if (a[(high + low) / 2] > b)
        {
            high = (high +low) / 2;
        }
        if (a[(high +low) / 2] < b)
        {
            low = (high + low) / 2;
        }
    }
    if (flag!=0)
    printf(" number is not found");
}