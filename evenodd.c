//check given number is odd and even
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given number is even");
    }
    else
    {
       printf( "given number is oddd");
    }
    return 0;
}
