// programto check that given number is positive,negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Given number is positive");

    }
    else if(n<0)
    {
        printf("Given number is negative");
    }
    else
    {
        printf("Given number is zero");
    }
    return 0;
}