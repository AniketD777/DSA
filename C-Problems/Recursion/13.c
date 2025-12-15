//Print star pattern with recursion
#include<stdio.h>

void printStar(int row,int col)
{
    if(row==0)
    {
        return;
    }
    if(col!=row)
    {
        printf("*");
        printStar(row,col+1);
    }
    else
    {
        printf("\n");
        printStar(row-1,0);
    }
}

void main()
{
    int height;
    printf("Put height of pattern: ");
    scanf("%d",&height);
    printStar(height,0);
}
