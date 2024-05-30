//getting numbers from user input

#include <stdlib.h>
#include <stdio.h>

int main(){
    double num1;
    double num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1); //scan double as an input we use lf
    //&num1 we are accessing the address of num1

    printf("Enter the second number: ");
    scanf("%lf", &num2);
    //start
    printf("Answer: %f", num1+num2);
    //go off;
    

    return 0;
}