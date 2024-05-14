// find lcm of givn numbers
#include<stdio.h>

int maximum(int,int,int);
int main()
{
  int a,b,c,max;

  printf("Enter the numbers : ");
  scanf("%d%d%d",&a,&b,&c);
  max=maximum(a,b,c);
  while(max%a!=0||max%b!=0||max%c!=0)
  {
    max++;
  }
printf("The LCM is %d",max);
return 0;


}
int maximum(int a,int b,int c)
{
    if(a>b&&a>c)
    return a;
else if(b>a&&b>c)
return b;
else 
return c;
}