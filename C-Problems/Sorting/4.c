//Insertion sort

#include<stdio.h>

void InserSort(int arr[],int size)
{
   int j;
   int temp;
   for(int i=1;i<size;i++)
   {
       j=i;
       temp=arr[j];
       while(arr[j-1]>temp && j>=1)
       {
            arr[j]=arr[j-1];
            j--;
       }
       arr[j]=temp;
    } 
}

int main()
{
    int arr[]={6,1,2,5,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    InserSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
