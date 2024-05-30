#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    int chosen;
    int option;
    int a;
    int i;
    int b;
    int c;
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
        for (b = 0; b < 2; b++)
        {
         printf("%d. %s \n", b+1, pwrroot[b]);
        }
        
        printf("choose method:");
        scanf(" %d",&c);
        if (c == 1 )
        {
            printf("Enter First number");
            scanf("%d",&num1);
            printf("Enter Second number");
            scanf("%d",&num2);
            printf("%f",pow(num1,num2));
        }
        else if (c== 2)
        {
            printf("Enter number");
            scanf("%d",&num1);
            printf("%f",sqrt(num1));
        }
        else if (c!= 1||2)
        { printf("Invalid Input");}
    }
}