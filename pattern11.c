#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for( int i=n;i>=0;i--)
    {

       
        if(i==n)
        {
            for(int j=1;j<2*n-1;j++)
            printf(" * ");
        }
        else{
        for(int k=1;k<=n-i;k++)
        {
            printf("   ");
        }
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            {
                printf(" * ");
            }
            else
            printf("   ");
        }
      printf("\n");
    }
    return 0;
}