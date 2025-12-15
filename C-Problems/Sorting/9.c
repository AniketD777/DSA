//Selection Sort (Recursive approach) (Optimized)
//Here we approach as picking the largest val out of the unsorted array and keep on appending at end and hence, shrinking arr from the end
//Using the pattern print row and col approach
#include<stdio.h>

void selecSort(int arr[],int row,int col,int maxValIdx) 
{
    if(row==0)
    {
        return;
    }
    if(col<row) //col goes from 0 -> row-1 and at col==row else statement ie. the swap and arr shrink from back
    {
        if(arr[col]>arr[maxValIdx])
        {
            selecSort(arr,row,col+1,col);
        }
        else
        {
            selecSort(arr,row,col+1,maxValIdx);
        }
    }
    else
    {
        int temp=arr[maxValIdx];
        arr[maxValIdx]=arr[row-1];
        arr[row-1]=temp;
        selecSort(arr,row-1,0,0); //col=0 because will always check from start after every recursive call
    }                             //and maxValIdx=0 because we'll consider initially that the first element itself is the largest and
}                                 //after few comparisons (ie. arr[col]>arr[max]) we'll be able to retrieve the actual maxValIdx

int main()
{
    int arr[]={4,5,1,0,2,3};
    int n=sizeof(arr)/sizeof(arr[0]); //To get the size of array (ie. no. of items in it)
    selecSort(arr,n,0,0);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
