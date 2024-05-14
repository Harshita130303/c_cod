#include<stdio.h>
int main()
{
    int n,h,g,s,o,p;
    printf("Enter the value of n : ");
    scanf("%d",&n);
      
    g=n;
    
    for(int i=1;i<=n;i++)
    {     h=n;


        for( int j=1;j<=i;j++)
        {
            printf("%d ",h);
            h--;
        }


        for( int k=1;k<=2*(n-i)-1;k++)
        {
            printf("%d ",g);
            s=g;
        }
        g--;


        if(i!=n)
        {
        for(int l=1;l<=i;l++)
        {
        printf("%d ",s);
        s++;
        }
        
        }
        else
        {
        s=2;
         for(int l=1;l<=i-1;l++)
        {
        printf("%d ",s);
        s++;
        }
        
        }

    printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {     h=n;


        for( int j=1;j<=i;j++)
        {
            printf("%d ",h);
            h--;
        }
o=h+1;

        for( int k=1;k<=2*(n-i)-1;k++)
        {
            printf("%d ",o);
            p=o;
        }
        o++;


        if(i!=n)
        {
        for(int l=1;l<=i;l++)
        {
        printf("%d ",p);
        p++;
        }
        
        }
        else
        {
        p=2;
         for(int l=1;l<=i-1;l++)
        {
        printf("%d ",p);
        p++;
        }
        
        }

    printf("\n");
    }
    return 0;
}