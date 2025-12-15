//Check Palindrome
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool checkPalind(char str[],int l,int r)
{
    if(l>=r)
    {
        return 1;
    }
    if(str[l]!=str[r])
    {
        return 0;
    }
    checkPalind(str,l+1,r-1);
}

int main()
{
    char str[]="131";
    int l=0;
    int r=strlen(str)-1;
    printf("%d",checkPalind(str,l,r));
    return 0;
}
