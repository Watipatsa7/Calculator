#include <stdio.h>

int main ()
{
    float number1;
    float number2;
     
    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the second number: ");
    scanf("%f", &number2);
    printf("The answer is : %f", number1 + number2);
}