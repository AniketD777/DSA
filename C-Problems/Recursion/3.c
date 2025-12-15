//To find a^b
#include<stdio.h>

int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    int res=power(a,b/2);
    if(b&1==1)//for odd
    {
        res=a*(res*res);
    }
    else
    {
        res=res*res;
    }
    return res;
}

int main()
{
    printf("%d",power(2,6));
    return 0;
}
