#include<stdio.h>
int largest(int [],int);

int main(){
    int a[7]={1,7,5,19,4,8,9};
    int length=7;
    int max;
    max=largest(a,length);
    printf("%d\n",max);
}
int largest(int a[],int length){
    int big=0;
    for(int i=0;i<length;i++)
    {
        if(a[big]<a[i+1])
         big=i+1;
    }
    return a[big];
}