//add two complex number
#include<stdio.h>
int main()
{
    int real1,real2,imaginary1,imaginary2,Real,Imaginary;
    printf("Enter the real part of first number : ");
    scanf("%d",&real1);
    printf("Enter the imaginary part of first number : ");
    scanf("%d",&imaginary1);
    printf("Enter the real part of second number : ");
    scanf("%d",&real2);
    printf("Enter the imaginary part of second number : ");
    scanf("%d",&imaginary2);
    Real=(real1+real2);
    Imaginary=(imaginary1+imaginary2);
    printf("The addition of two complex nimber is %d + %di ",Real,Imaginary);
    return 0;
    

}