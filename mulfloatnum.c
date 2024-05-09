//multiply floating point numbers
#include<stdio.h>
int main()
{
    float a,b,mul;
    printf("Enter the two floating number : ");
    scanf("%f %f",&a,&b);
    mul=a*b;
    printf("Multiplication of two given numbers is : %.4f",mul);
    return 0;
}