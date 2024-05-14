#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
      if(i!=n-1){
        for(int j=0;j<=2*i;j++)
        {if(j==0||j==2*i)
        printf("*");
        else 
        printf(" ");
        }
      }
      else{
        for(int j=0;j<=2*i;j++)
        printf("*");
      }

    //    if(i==1)
    //    continue;
    //     else if(i!=n){
    //     for(int l=1;l<=2*(i-1)-1;l++)
    //     {
    //         printf(" ");
    //     }
    //     }
    //     else{
    //         for(int l=1;l<=2*(i-1)-1;l++)
    //     {
    //         printf("*");
    //     }
    //     }
    //     if(i==1)
    //     {
    //         continue;
    //     }
    //     else {
    //     for(int m=1;m<=1;m++)
    //     {
    //         printf("*");
    //     }
    //     }
        printf("\n");
    }
    return 0;
}