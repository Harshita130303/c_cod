//print prime numbers between intervals
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the numbers : ");
    scanf("%d%d",&i,&j);
    for(n=i;n<=j;n++)
    {
        for(int g=2;g<n;g++)
        {
          if(n%g!=0&&g==n-1)
          printf("%d\t",n);
        if(n%g!=0)
          continue;
        else 
        break;
          
        }
    }
    return 0;
}