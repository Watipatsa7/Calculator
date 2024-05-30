#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    int chosen;
    int option;
    int a;
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
    if (chosen == 2)
       {
        char pwrroot[2][15]=
        {
            "power",
            "squareroot",
        };
        for (option = 0; a < 3; a++)
        {
         printf("%d. %s \n", a+1, pwrroot[a]);
        }
        print("choose method");
        scanf("%d",&method);
        if (method ==1 );
        {
            printf("Enter First number");
            scanf("%d",&num1);
            printf("Enter Second number");
            scanf("%d",&num2);
            printf("%f",pow(num1,num2));
        }
        elseif (method==2);
        {
            printf("Enter number");
            scanf("%d",&num1);
            printf("%f",sqrt(num1));
        }
        elseif (method!=1||2);
        { printf("Invalid Input");}
    }
}    