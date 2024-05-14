//make simple calculator
#include<stdio.h>
int main(){
    int a,b, operator;
     int addition,subtraction,multiplication;
     float division;
    printf("Enter the number a and b : ");
    scanf("%d%d",&a,&b);
    addition=a+b;
    subtraction=a-b;
    division=a/b;
    multiplication=a*b;
    printf("Choose the option below\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");
    scanf("%d",&operator);
    switch(operator){
        case 1:
        printf("%d",addition);
        break;
        case 2:
        printf("%d",subtraction);
        break;
        case 3:
        printf("%.1f",division);
        break;
        case 4:
        printf("%d",multiplication);
        break;
        default :
        printf("this operation can't work.");
        break;
    }
    return 0;

}