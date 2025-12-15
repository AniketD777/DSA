//Selection Sort (Recursive Method)

#include<stdio.h>

int min(int a,int b)
{
    if(a>b) return b;
    else    return a;
}

int minValIdx(int arr[],int size)
{
    int minVal=__INT_MAX__;
    for(int i=0;i<size;i++) //find the min value from arr
    {
        minVal=min(minVal,arr[i]);
    }
    int i=0;
    while(arr[i]!=minVal) i++; //To search for that minValue index(i) from arr
    return i;
}

void selecSort(int arr[],int size)
{
    if(size==1)
    {
        return;
    }
    int minValIndex=minValIdx(arr,size);
    if(arr[minValIndex]<arr[0]) //agar smallest element chota hua arr[0] then swap with that minValue index
    {
        int temp=arr[minValIndex];
        arr[minValIndex]=arr[0];
        arr[0]=temp;
    }
    selecSort(arr+1,size-1);//We'll keep on shrinking arr from front
}

void main()
{
    int arr[]={4,5,1,0,2,3};
    int n=sizeof(arr)/sizeof(arr[0]); //To get the size of array (ie. no. of items in it)
    selecSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return;
}
