//Quick Sort (Recursive Approach)
#include<stdio.h>

int partition(int arr[],int l,int r)
{
    int Pivot=arr[l];// Humesha first element ko pivot consider kr re hai as per our convention for every recursive subarray call
    int i=l+1;
    int j=r;
    do //do while used because kam se kam ek baar toh chalana hai to check the inside conditions
    {
        while(arr[i]<=Pivot)
        {
            i++;
        }
        while(arr[j]>Pivot)
        {
            j--;
        }
        if(i<j) //agar i cross kr gya j ko then we can't swap arr[i] and arr[j] now we need to swap arr[j] and the Pivot element
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }while(i<j);
    //Agar i>j swap Pivot with arr[j]
    arr[l]=arr[j];
    arr[j]=Pivot;

    return j; //Because now Pivot comes to the index j of arr as we swapped and we need to eventually return this index for further recursive calls
}

void QSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int PivotIndex=partition(arr,l,r);
        QSort(arr,l,PivotIndex-1);
        QSort(arr,PivotIndex+1,r);
    }
}

int main()
{
    int arr[]={6,3,6,3,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    QSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
