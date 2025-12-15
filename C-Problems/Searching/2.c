//Linear Search

#include<stdio.h>

int main()
{
    int arr[]={0,1,5,4,0,3,2};
    int key;
    printf("Input key to search: ");
    scanf("%d",&key);
    int i=0;
    while(i<sizeof(arr)/sizeof(arr[0]))
    {
        if(arr[i]==key)
        {
            printf("Key Found!");
            break;
        }
        i++;
    }
    if(i==sizeof(arr)/sizeof(arr[0]))
    {
        printf("Key not found!");
    }
    return 0;
}
