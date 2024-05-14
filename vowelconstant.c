//given character  is consonant and vowel
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    switch(ch){
        case'A':
        printf("Given character is vowel");
        break;
        case'a':
        printf("Given character is vowel");
        break;
        case'E':
        printf("Given character is vowel");
        break;
        case'e':
        printf("Given character is vowel");
        break;
        case'O':
        printf("Given character is vowel");
        break;
        case'o':
        printf("Given character is vowel");
        break;
        case'i':
        printf("Given character is vowel");
        break;
        case'I':
        printf("Given character is vowel");
        break;
        case'u':
        printf("Given character is vowel");
        break;
        case'U':
        printf("Given character is vowel");
        break;
        default:
        printf("Given character is consonant");
        break;
    }
    return 0;

}