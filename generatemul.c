//generate multiplication table
#include<stdio.h>
int main()
{
    int n,i,ans=1;
    printf("Enter the number to generate table for you : ");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        ans=n*i;
        printf("%d * %d = %d\n",n,i,ans);
    }
    return 0;
}