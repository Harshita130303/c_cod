//display all armstrong numbers betweeb 1 to 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,num,nom,nm,count,sum;
    printf("let's start\n");
    
    for(n=1;n<=1000;n++)
    {
        count=0;
        nom=n;
        sum=0;
    
        while(n!=0)
        {
            n=n/10;
            count+=1;
        }
        n=nom;
        for(i=1;i<=count;i++)
        {
            num=nom%10;
            sum=sum+pow(num,count);
            nom=nom/10;
            
        
        }
        if(sum==n)
            printf("%d\t",sum);

    }
   
    return 0;
    
}