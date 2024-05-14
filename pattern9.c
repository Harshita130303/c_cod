#include<stdio.h>
int main()
{
    int i,n,j,k=65;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
    return 0;
    }