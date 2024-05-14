#include<stdio.h>
int main()
{
    int n,i,j,g;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    g=n;
    for(i=n;i>=1;i--)
    {
        for(j=g;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
        g--;
    }
    return 0;


}