/*
print          *
             * *
           *   *
         *     *
       * * * * * 
*/
#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main()
{
    int n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for(int i=n; i>0; i--){
        for(int j=1; j<i; j++){
            printf(" ");            
        }
        for(int j=n; j>=i; j--){
            if(i>=2 && i<=n){
                if(j==n || j==i){
                    printf("*");
                }
                else
                printf(" ");
            }
            else
            printf("*"); 
        }
        printf("\n");       
    }   
return 0;
}