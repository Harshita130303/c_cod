//print prime number 1 to n
#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++){
        if(i%j==0&&i!=j)
        break;
    else if(i%j!=0)
    continue;
    else
    printf( "%d\t",i);
    }
    }
    return 0;
}