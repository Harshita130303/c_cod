#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        if(n%2!=0){
        for(j=1;j<=n-2*(i-1)+2;j++)
        {
            printf("*");
        }
        }
        else{
             for(j=1;j<=n-2*(i-1)+1;j++)
        {
            printf("*");
        }
        }
        printf("\n");
    }
    return 0;
}