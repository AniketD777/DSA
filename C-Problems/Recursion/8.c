//Number of steps to reduce a num to zero (Dividing by 2 if even or subtracting 1 if odd)
#include<stdio.h>

int countSteps(int num,int *count)
{
    if(num==0)
    {
        return *count-1;//-1 because when num==1 we only need 1 more step to reduce to zero
    }
    if(num&1==1)//ie. odd 
    {
        *count=*count+2;
    }
    else
    {
        *count=*count+1;
    }
    countSteps(num/2,count);
}

int main()
{
    int count=0;
    printf("%d",countSteps(10,&count));
    return 0;
}
