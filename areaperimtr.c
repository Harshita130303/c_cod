//area and parimeter of rectangle
#include<stdio.h>
int main(){
    float len,breadth,area,perimeter;
    printf("Enter the length and breadth of rectangle : ");
    scanf("%f %f",&len,&breadth);
    area=len*breadth;
    perimeter=2*(len+breadth);
    printf("Area and perimeter of rectangle are : %f and %f",area,perimeter);
    return 0;

}