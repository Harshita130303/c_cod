//program to reverse the number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,nom,a=0,count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    num=n;
    nom=n;
    while(n!=0)
    {
        n=n/10;
        count+=1;
    }
    for(int i=count;i>=1;i--){
          num=nom%10;
           nom=nom/10;
           a=a+num*pow(10,i-1);}
printf("%d",a);
return 0;

           
    }