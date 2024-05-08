#include<stdio.h>
int main()

{
    float ci;
    int principle,rate,time_period;
    printf("Enter the principle,rate and time period : ");;
    scanf("%d %d %d",&principle,&rate,&time_period);
     ci=principle*(1+(rate/100)^time_period);
     printf("Compound interest is : %f",ci);
     return 0;
}