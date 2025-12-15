//To check for key in array
#include<stdio.h>
#include<stdbool.h>

bool searchKey(int arr[],int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    return searchKey(arr+1,size-1,key);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(searchKey(arr,n,3)) //ie. if true, key found
    {
        printf("Key found!");
    }
    else
    {
        printf("Key not found!");
    }
    return 0;
}
