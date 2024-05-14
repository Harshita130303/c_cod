#include<stdio.h>
int main()
{
    int n,h,g;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            h=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",h);
            h++;
        }
        for(int k=1;k<=2*(n-i)-1;k++)
        {
            printf("  ");
        }
        if(i!=n)
        {
            g=i;
        for(int l=1;l<=i;l++)
        {
            printf("%d ",g);
            g--;

        }
        }
        else
        for(int l=1;l<=i-1;l++)
        {
            g=i;
            printf("%d ",g);
            g--;

        }

        printf("\n");
    }
    return 0;
}