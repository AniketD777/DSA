//Count Sort (One of the fastest than others discussed till now but bad space complexity)

#include<stdio.h>

void CSort(int arr[],int size)
{
    int a[100]={0}; //All positions initialized with 0
    for(int i=0;i<size;i++)
    {
        a[arr[i]]++; 
    }
    int i=0;
    int j=0;
    while(j<100) //Sare indexes ke liye check kr sequentially array 'a' me and if not zero put that in arr and decrement the count in 'a' 
    {
        if(a[j]!=0)
        {
            arr[i]=j;
            i++;
            a[j]--;
        }
        else //ie. a[i]==0
        { 
            j++;
        }
    }
}

int main()
{
    int arr[]={6,3,6,3,1,4,0,5,5,5,5,5,9,2,5,2,2,2,2,2,2,7,7,7,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    CSort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
