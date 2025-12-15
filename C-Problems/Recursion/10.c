//Print array of indexes where key occurs
//By passing an array(ansArr) to function and modifying it for indexes of key 
#include<stdio.h>

void getKeyArray(int *arr,int size,int ActualSize,int key,int ansArr[])
{
    static int i=0;
    if(size==0)
    {
        return;
    }
    if(arr[0]==key)
    {
        ansArr[i]=ActualSize-size;
        i+=1;
    }
    getKeyArray(arr+1,size-1,ActualSize,key,ansArr);
}

int main()
{
    int arr[]={1,2,4,4,5};
    int ansArr[50]={0};
    int n=sizeof(arr)/sizeof(arr[0]);
    getKeyArray(arr,n,n,4,ansArr);
    int i=0;
    while(ansArr[i]!=0)
    {
        printf("%d ",ansArr[i]);
        i++;
    }
    return 0;
}
