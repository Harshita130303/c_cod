//check whether number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int num=n;
    int nom=n;
    int nm=n;

    
    while(n!=0){
     n=n/10;
     count+=1;
    }
//    printf("the value of n : %d\n",n);
    
    for(i=1;i<=count;i++)
    { //printf("the value of n : %d\n",n);
       
       // printf("the value of num : %d\n",num);

        num=nom%10;
        nom=nom/10;
        // printf("the value of num : %d\n",num);

        
        
        sum=sum+pow(num,count);
       
        
    }
    
    if(nm==sum)
    {
        printf("Given number is armstrong number\n");
       printf("%d",sum);

    }
    else{
        printf("Given number is not armstrong number\n");
     printf("%d",sum);
    }
    
return 0;
}