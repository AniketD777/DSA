//Count no. of zeroes in a number
#include<stdio.h>

void countZero(int num,int *count)
{
    if(num==0)
    {
        return;
    }
    if(num%10==0)
    {
        *count=*count+1;//*count++ gives segmen.... error
    }
    countZero(num/10,count);
}

int main()
{
    int count=0;
    countZero(100002500,&count);
    printf("%d",count);
    return 0;
}
