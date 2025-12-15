//Binary Search(Recursive approach)

#include<stdio.h>

void BS(int arr[],int l,int r,int key)
{
    int mid=(l+r)/2;
    if(arr[mid]!=key && l==r)
    {
        printf("Key Not Found!");
        return;
    }
    if(arr[mid]==key)
    {
        printf("Key Found!");
        return;
    }
    if(arr[mid]>key)
    {
        BS(arr,l,mid-1,key);
    }
    else
    {
        BS(arr,mid+1,r,key);
    }
}

int main()
{
    int key;
    int arr[]={0,1,2,2,3,4,5,6,7,8,9,69,69,72,73};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter key to search: ");
    scanf("%d",&key);
    BS(arr,0,n-1,key);
    return 0;
}
