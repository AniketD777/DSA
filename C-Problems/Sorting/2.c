//Bubble Sort (Recursive Method)
//(Just like the triangle pattern print function ie. consider 'i' as 'row' and 'j' as 'col')
#include<stdio.h>

void bubbSort(int arr[],int i,int j)
{
    if(i==0)
    {
        return;
    }
    if(i>j)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        bubbSort(arr,i,j+1); //Just like the inner loop of iterative method
    }
    else
    {
        bubbSort(arr,i-1,0); //Just like the outer loop of iterative method
    }
}

int main()
{
    int arr[]={6,1,2,5,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbSort(arr,n,0);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
