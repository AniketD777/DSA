//Bubble Sort (Iterative way)

#include<stdio.h>

void bubbSort(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={6,1,2,5,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
