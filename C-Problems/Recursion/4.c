//To find sum of digits => 1234-> 1+2+3+4=10
#include<stdio.h>

int SumOfDig(int num)
{
    if(num==0)
    {
        return 0;
    }
    return (num%10)+SumOfDig(num/10);
}

int main()
{ 
    printf("%d",SumOfDig(4589));
    return 0;
}
