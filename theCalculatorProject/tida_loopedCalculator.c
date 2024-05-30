#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int chosen;
    int option;
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

    if (chosen == 1);
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

//        if (method == 1)
//        {
//            printf("%f", sin(num1));
//        }
//        else if (method == 2)
//        {
//            printf("%f", cos(num1));
//        }
//        else if (method == 3)
//        {
//            printf("%f", tan(num1));
//        }
//        else if (method != 1,2,3)
//        {
//            printf("Invalid input");
//        }
//    }
    if (chosen == 2);
    {
        char pwr_n_root[2][15]=
        {
            "power",
            "squareroot",
        };
        for (option = 0; option < 3; option++)
        {
         printf("%d. %s \n", option+1, pwr_n_root[option]);
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
        else if (method==2);
        {
            printf("Enter number");
            scanf("%d",&num1);
            printf("%f",sqrt(num1));
        }
        else if (method!=1,2);
        { printf("Invalid Input");}
    }

}
