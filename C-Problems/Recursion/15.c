//Remove particular character from string

#include<stdio.h>

char *newStr(char str[])
{
    static int i=0;
    static char ans[50]; //Because we want the ans array to persist until main() terminates because non-static local variables gets destroyed as soon as function returns what is supposed to return. So, here as soon as it returns an address, the pointer returned becomes a dangling pointer and hence, we need to make a static ans array such that the elements in those addresses remain entact and doesn't get replaced by garbage values
    if(str[0]=='\0')
    {
        return ans;
    }
    if(str[0]!='a')
    {
        ans[i]=str[0];
        i++;
    }
    newStr(str+1);
}

int main()
{
    char str[]="Hola";
    char *ans=newStr(str);
    printf("%s",ans);
    return 0;
}

//Another Method by simply pasing an ans array to the function argument and modifying that

/*void newStr(char str[],char ans[]) => will store the new string in ans
{
    static int i=0;
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!='a')
    {
        ans[i]=str[0];
        i++;
    }
    newStr(str+1,ans);
}

int main()
{
    char str[]="baccad";
    char ans[100];
    newStr(str,ans);
    printf("%s",ans);
    return 0;
}*/
