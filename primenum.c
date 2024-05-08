//check whether the number is prime or not
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    //condition to check prime or not
    for(i=2;i<=n;i++)
    {
        if(n%i==0&&i!=n){
        printf("Given number is not prime");
    break;}
    else if(n%i!=0&&i!=n)
    continue;
else
printf("Given number is prime");

    }
    return 0;
}