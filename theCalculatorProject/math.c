#include <stdio.h>
#include <math.h>

int main(){
    double num1;
    double num2;
    double power;
    double root;
    int index;
    int selected;
    double result;
    char operator;

    char methods[20][10] = {
        "cos",
        "sin",
        "tan",
        "power",
        "root 2",
        "arithmetic"
    };

    for (index = 0; index < 6; index++){
        /* code */
    
        printf("%d. %s \n", index+1, methods[index]);

    }
    printf("Select function: ");
    scanf("%d", &selected);

    if(selected == 1 || selected == 2 || selected == 3){
        printf("Enter first number: ");
        scanf("%lf", &num1);
    }

    else if(selected == 4 ){
        printf("Enter number: ");
        scanf("%lf", &num1);

        printf("Enter power: ");
        scanf("%lf", &power);
    }
    else if(selected == 5){
        printf("Enter number: ");
        scanf("%lf", &num1);
    }
    else{
        printf("Select arithmetic operator (+, -, *, /): ");
        scanf(" %c", &operator);
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);
    }


    switch(selected){
        case 1:
            result = cos(num1);
            break;
        case 2:
            result = sin(num1);
            break;

        case 3:
            result = tan(num1);
            break;

         case 4:
            result = pow(num1, power);
            break;

        case 5:
            result = sqrt(num1);
            break;
        case 6:
            switch (operator){
            case '+':
                /* code */
                result = num1 + num2;
                break;
            case '-':
                /* code */
                result = num1 + num2;
                break;

            case '*':
                /* code */
                result = num1 + num2;
                break;

            case '/':
                /* code */
                result = num1 + num2;
                break;
            
            default:
                printf("Invalid operator \n");
                break;
            }
        default:
            break;
    }
    printf("%f", result);
    return 0;
}