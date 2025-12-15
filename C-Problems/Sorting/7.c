//Selection Sort(Iterative approach)

#include<stdio.h>

int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}

int MinOfArr(int arr[],int size)
{
    int minVal=__INT_MAX__;
    for(int i=0;i<size;i++)
    {
        minVal=min(minVal,arr[i]);
    }
    return minVal;
}

void selecSort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i==size-1) break;//ie. if at last element then we already know that it is sorted 
        for(int j=i+1;j<size;j++)//ith index fixed rahega and we will find min from i+1
        {
            int MinVal=MinOfArr(arr+j,size-j);//We know ith index se pehle wale saare sort ho chuke hai so will only check after the ith index
            if(arr[j]==MinVal && arr[j]<arr[i])//thats why arr will keep on getting smaller 
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                break;
            }
        }
    }
}

int main()
{
    int arr[]={6,1,2,5,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    selecSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
