//sum of fibonptrcci numbers at even indexing
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b=0,a=0,c=1,d;
    int* ptr;
    int size;
    printf("Enter the number : ");
    scanf("%d",&size);
    ptr =(int*)malloc(size*sizeof(int));
    
    
    ptr[0]=a;
    for( int i=0;i<size;i++)
    {
        printf("%d \n",ptr[i]);
        
        d=a+c;
        a=c;
        c=d;
        ptr[i+1]=a;
        
    }
    for(int j=0;j<size;j++)
        {
            if(j%2==0)
            b=b+ptr[j];
        else
         continue;
            
        }
        printf("\n%d",b);
        return 0;
}