#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    int chosen;
    int option;
    int i;
    int op;
    int wati;
    int method;
    int num1, num2;
    double result;
    do
    {
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

    if (chosen == 1)
    {
        char trig[3][4]=
        {
            "sin",
            "cos",
            "tan",
        };
        for (option = 0; option < 3; option++)
        printf("%d. %s \n", option+1, trig[option]);
        printf("Choose method:");
        scanf("%d",&method);

         printf("Input number:");
         scanf("%d",&num1);

        if (method == 1)
        {
            printf("%f", sin(num1));
        }
        else if (method == 2)
        {
            printf("%f", cos(num1));
        }
        else if (method == 3)
        {
            printf("%f", tan(num1));
        }
        else if (method != 1||2||3)
        {
            printf("Invalid input");
        }   
    }
    
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
    // {
    //     char pwrroot[2][15]=
    //     {
    //         "power",
    //         "squareroot",
    //     };
    //     for (option = 0; option < 3; option++)
    //     {
    //      printf("%d. %s \n", option+1, pwrroot[option]);
    //     }
    //     print("choose method");
    //     scanf("%d",&method);
    //     if (method ==1 );
    //     {
    //         printf("Enter First number");
    //         scanf("%d",&num1);
    //         printf("Enter Second number");
    //         scanf("%d",&num2);
    //         printf("%f",pow(num1,num2));
    //     }
    //     elseif (method==2);
    //     {
    //         printf("Enter number");
    //         scanf("%d",&num1);
    //         printf("%f",sqrt(num1));
    //     }
    //     elseif (method!=1||2);
    //     { printf("Invalid Input");}
    // }
    printf("\n\nPress 1 for Yes 2 for No");
    printf("\nDo you want to continue:");
    scanf("%d",&wati);
 }
 while(wati==1);
}
