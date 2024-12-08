#include<stdio.h>
int newarray(int[] ,int ,int,int,int );
int main(){
    int arr[10]={1,6,7,4,5},a,b,size;
    int length =5,capacity=10;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("enter the position\n");
    scanf("%d",&b);
    size=newarray(arr,a,b,length,capacity);
    for(int i=0;i<size;i++)
     printf("%d\t",arr[i]);
    
}
int newarray(int arr[],int a,int b,int length,int cap){
    if(cap==length)
    return length;
    int pos=b-1,i;
    for( i=length;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[b-1]=a;
    return length+1;
}

