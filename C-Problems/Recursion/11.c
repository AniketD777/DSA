//Print array of indexes where key occurs
//Without passing an ansArr to function

#include<stdio.h>

int *getKeyArr(int arr[],int key)
{
    static int i=0; //i to maintain the index of the arr element
    static int j=0; //j to maintain ansArr indexing such that we can move to next index and add new elements to it
    static int ansArr[100]; //Now as we defined a static array now, it won't become a dangling pointer because it's elements remain entact until the runtime ie. until the main() gets terminated
    if(arr[0]=='\0')
    {
        ansArr[j]=10101010;//Will use this no. as convention to identify where the ansArr ends because there are possibilties that the answer imdex might occur at 0th position too so if we use '\0' it won't print the rest answers ahead and will get terminated without giving the actual ansArr in the main()
        return ansArr;
    }
    if(arr[0]==key)
    {
        ansArr[j]=i;
        j++; //To point to the next index of ansArr where we need to store
        i++; //To point to the next index of arr
        getKeyArr(arr+1,key);
    }
    else
    {
        i++; //To point to the next index of arr
        getKeyArr(arr+1,key);
    }
}

int main()
{
    int arr[]={4,1,2,4,4,6};
    int *ans=getKeyArr(arr,4);
    while(*ans!=10101010) //10101010 is a covention we are using to determine end of ansArr/ans
    {
        printf("%d ",*ans);
        ans=ans+1;
    }
    return 0;
}
