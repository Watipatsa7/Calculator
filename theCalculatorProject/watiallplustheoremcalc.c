#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chosen;
    int option;
    int i,p,k;
    int op;
    int wati;
    int method;
    int num1, num2;
    double result;
    int index;
    int a,b,c;
    int position;

    do
    {
    char category[4][30]={
        "Trigonometry",
        "Power and SquareRoot",
        "Arithmetic",
        "Pythagoras Theorem",
    };

    for (option = 0; option < 4; option++)
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

    else if (chosen == 3)
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
    else if (chosen == 2)
       {
        char pwrroot[2][15]=
        {
            "power",
            "squareroot",
        };
        for (p = 0; p < 2; p++)
        {
         printf("%d. %s \n", p+1, pwrroot[p]);
        }
        printf("choose method:");
        scanf(" %d",&k);
        if (c == 1 )
        {
            printf("Enter First number");
            scanf("%d",&num1);
            printf("Enter Second number");
            scanf("%d",&num2);
            printf("%f",pow(num1,num2));
        }
        else if (c == 2)
        {
            printf("Enter number");
            scanf("%d",&num1);
            printf("%f",sqrt(num1));
        }
        else if (c!= 1||2)
        { printf("Invalid Input");}
    }
else if (chosen == 4)
    {
        printf("Select position not the side\n");
   char side[3][20] = 
   {
    "a",
    "b",
    "c 'hypotenuse'",
   };
    for (index = 0; index < 3; index++)
    {
     printf("%d. %s \n", index+1, side[index]);
    }
    printf("which side do you want:");
    scanf("%d",&position);

 if (position == 1)
    {
        printf("Enter value of b: ");
        scanf("%d",&b);
        printf("Enter value of c: ");
        scanf("%d",&c);
        printf("a is %f",sqrt(pow(c,2)-pow(b,2)));
    }
 else if(position == 2)  
    {
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of c: ");
        scanf("%d",&c);
        printf("b is %f",sqrt(pow(c,2)-pow(a,2)));
    }
else if(position == 3)
    {
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        printf("c is %f",sqrt(pow(a,2)+pow(b,2)));
    }
else 
    {
        printf("Invalid input");
    }
    }
    else { printf("Invalid input \n");
    }

    printf("%f ", result);


    printf("\n\nPress 1 for Yes 2 for No");
    printf("\nDo you want to continue:");
    scanf("%d",&wati);
 }
 while(wati==1);
}
