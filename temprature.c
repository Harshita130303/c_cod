//calculate farehiet to celcius
#include<stdio.h>
int main()
{
    float farehiet,celcius;
    printf("Enter the temperature in farehiet : ");
    scanf("%f",&farehiet);
    celcius=(farehiet-32)*(5.0/9.0);
    printf("Temperature in celcius : %.6f",celcius);
    return 0;
}