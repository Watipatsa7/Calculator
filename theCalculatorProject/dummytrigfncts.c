#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    int chosen;
    int option;
    int i;
    int op;
    int method;
    int num1, num2;
    double result;
    char category[3][20]={
        "Trigonometry",
        "Power and SquareRoot",
        "Arithmetic",
    };
     for (option = 0; option < 3; option++)
    {
     printf("%d. %s \n", option+1, category[option]);
    }

    printf("Select Category:");
    scanf("%d",&chosen);

if (chosen == 3)
{
        char arith[6][10]= {
            "sum",
            "subtract",
            "multiply", 
            "divide",
        };
         for (i= 0; i < 4; i++)
    {
     printf("%d. %s \n", i+1, arith[i]);
    }
    printf("select operator:");
    scanf("%d",&op);
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
        switch (op){
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
        default:
            break;
     }

    }

    printf("%f", result);
    return 0;
 }