#include<stdio.h>
int main()
{
    int n,max;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   
 max=n*(n+1)/2;//formula to get max
    for(int i=n;i>=1;i--)
    {
        
        for(int j=1;j<=i;j++)
        {
            max=max-1;
            printf("%d  ",max);
        }
        printf("\n");
    }
    return 0;
}