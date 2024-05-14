//armstrong number between two interval
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,num,nom,count,sum;
    printf("Enter the  numbers : ");
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        count=0;
        sum=0;
        num=i;
        nom=i;
    while(i!=0){
        i=i/10;
        count+=1;
    }
    i=num;
    for(int j=1;j<=count;j++)
    {
        num=nom%10;
        nom=nom/10;
        sum=sum+pow(num,count);
    }
    
    if(i==sum)
    printf("%d\t",i);
    }
    
}