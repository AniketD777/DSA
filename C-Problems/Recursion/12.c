//Search key in rotated sorted array
#include<stdio.h>
#include<stdbool.h>

bool searchKey(int arr[],int key,int start,int end)
{ 
    int mid=(start+end)/2;
    if(start==end && arr[start]!=key)
    {
        return false;
    }
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[start]<=arr[mid] && key>=arr[start] && key<arr[mid])//that means after start until mid arr is sorted
    {
        return searchKey(arr,key,start,mid-1); //mid becomes the end
    }
    else //ie. for the unsorted part ie. for after mid+1
    {
        return searchKey(arr,key,mid+1,end);
    }
}

int main()
{
    int arr[]={6,7,8,9,0,1,2,3,4};
    bool check=searchKey(arr,8,0,8);
    printf("%d",check);
    return 0;
}
