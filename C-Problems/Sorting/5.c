//Merge Sort (Recursion)

#include<stdio.h>

void merge(int arr[],int l,int mid,int r) //Jodega
{
    //To form arr1 and arr2
    int arr1[mid+1];
    int m=0;
    while(m<mid+1)
    {
        arr1[m]=arr[m];
        m++;
    }
    int arr2[r-mid];
    int n=0;
    while(n<r-mid)
    {
        arr2[n]=arr[n+mid+1];
        n++;
    }
    
    //To merge ie. to edit the arr with sorted arr
    int idx=0;
    int i=0; //For arr1 ie. from l -> mid
    int j=0; //For arr2 ie. from mid+1 -> r
    while(i<mid+1 || j<r-mid)
    {
        if(arr1[i]<arr2[j] && i<mid+1 && j<r-mid) //This is when i and j both are pointing inside their respective arrays (ie. arr1 and arr2)
        {
            arr[idx]=arr1[i];
            idx++;
            i++;
        }
        else if(arr2[j]<arr1[i] && i<mid+1 && j<r-mid) //This is also when i and j both are pointing inside their respective arrays (ie. arr1 and arr2)
        {
            arr[idx]=arr2[j];
            idx++;
            j++;
        }
        else if(i==mid+1) //This is when i is pointing outside arr1 and still elements left in arr2 ie. j is still pointing inside arr2
        {                 //and we already know arr2 is already sorted so need to put the element in arr in same fashion
            while(j<r-mid)
            {
                arr[idx]=arr2[j];
                idx++;
                j++;
            }
        }
        else //ie. if j==r-mid //This is when j is pointing outside arr2 and still elements left in arr1 ie. i is still pointing inside arr1
        {                     //and we already know arr1 is already sorted so need to put the element in arr in same fashion
            while(i<mid+1)
            {
                arr[idx]=arr1[i];
                idx++;
                i++;
            }
        }
    }
}

void mSort(int arr[],int l,int r) //Todega
{
    if(l<r) //ie. agar l==r hai then, that means it's already sorted
    {
        int mid=(l+r)/2;
        mSort(arr,l,mid);
        mSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[]={6,3,9,5,2,8,7,1};
    int n=(sizeof(arr)/sizeof(arr[0]))-1;
    mSort(arr,0,n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
