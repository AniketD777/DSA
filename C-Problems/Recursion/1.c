//Recursion
//Tower of Hanoi
#include<stdio.h>

void towOfHanoi(int blocks,char src,char hel,char des)//Source, helper and destination
{
    if(blocks==1)
    {
        printf("Move 1 from %c to %c\n",src,des);
        return;
    }
    towOfHanoi(blocks-1,src,des,hel);//put n-1 from src to hel
    printf("Move %d from %c to %c\n",blocks,src,des);//put n from src to des
    towOfHanoi(blocks-1,hel,src,des);//put n-1 from hel to src
}

int main()
{
    puts("Note: 1,2,3... specify block no. and size factor is 1<2<3<...........\n");
    char a='A', b='B', c='C'; //A=>src , B=>hel , C=>des
    towOfHanoi(3,a,b,c);
    return 0;
}
