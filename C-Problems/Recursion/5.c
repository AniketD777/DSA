//To reverse a num 1234->4321
#include<stdio.h>

void rev(int num,int *res)
{
    if(num==0)
    {
        return;
    }
    *res=(*res*10) + (num%10);
    rev(num/10,res);
}

int main()
{
    int res=0;
    rev(1234,&res);
    printf("%d",res);
    return 0;
}
