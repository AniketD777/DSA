//Remove substring('apple') from a string
#include<stdio.h>
#include<stdbool.h>

bool checkApple(char str[])
{
    static int i=0;
    char check[]="apple";
    if(check[i]=='\0')
    {
        i=0;  //Important to set back to 0 because 'i' whole throughout the runtime and destroyed only after main() terminates 
        return 1;
    }
    if(check[i]==str[0])
    {
        i++;
        checkApple(str+1);
    }
    else
    {
        i=0;
        return 0;
    }
}
 
void checkStrApple(char str[],char ans[])
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]=='a' && checkApple(str)==1)
    {
        checkStrApple(str+5,ans);
    }
    else
    {
        ans[0]=str[0];
        checkStrApple(str+1,ans+1);
    }
}

int main()
{
    char str[]="kappleooomapplahey";
    char ans[50];
    checkStrApple(str,ans);
    printf("%s",ans);
    return 0;
}
