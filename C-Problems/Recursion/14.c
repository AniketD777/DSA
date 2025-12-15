//Print a triangle using recursion

#include<stdio.h>

void printTriangle(int row,int col)
{
    if(row==0)
    {
        return;
    }
    if(row>col) //Until row!=col
    {
        printTriangle(row,col+1);
        printf("*");
    }
    else
    {
        printTriangle(row-1,0);
        printf("\n"); //Star return ke time print honge toh new line ko bhi return ke time hi print krna pdega
    }
}

int main()
{
    int height;
    printf("Input Height: ");
    scanf("%d",&height);
    printTriangle(height,0);
    return 0;
}
