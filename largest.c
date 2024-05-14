//find largest among three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest of given three numbers");
    }
    else if(b>a&&a>c)
    {
      printf("b is greatest of given three numbers");  
    }
    else
    {
        printf("c is greatest of given three numbers");
    }
    return 0;
}