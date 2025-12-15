//To check sorted array or not 
#include<stdio.h>
#include<stdbool.h>

bool checkSort(int arr[],int size) 
{
    if(size==0 || size==1) //size is 0 ie. empty arr and 1 if only one element present which is sorted
    {    //size=0 unn ke liye jo array empty chord denge and size=1 is for the recursive base case
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    return checkSort(arr+1,size-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",checkSort(arr,n));
    return 0;
}
