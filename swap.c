//Write a Program to Swap the values of two variables.
#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf ("Enter the two number : ");
    scanf("%d %d",&a,&b );
   temp=a;
   a=b;
   b= temp;
   printf("Number after swapping is : %d %d",a,b);
   return 0;
}