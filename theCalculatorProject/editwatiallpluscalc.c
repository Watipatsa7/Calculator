#include <stdio.h>
#include <math.h>

double squarepower()
{
    int p,k,num1,num2;
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
        if (k == 1 )
        {
            printf("Enter First number");
            scanf("%d",&num1);
            printf("Enter Second number");
            scanf("%d",&num2);
            printf("%.2f",pow(num1,num2));
        }
        else if (k == 2)
        {
            printf("Enter number");
            scanf("%d",&num1);
            printf("%.2f",sqrt(num1));
        }
        else if (k!= 1||2)
        { printf("Please choose a correct method");}
}
double trigonometry ()
{
    int method,num1;
    int option;
        char trig[3][4]=
        {
            "sin",
            "cos",
            "tan",
        };
        for (option = 0; option < 3; option++)
        {
        printf("%d. %s \n", option+1, trig[option]);
        }
        printf("Choose method:");
        scanf("%d",&method);
        if (method>0&&method<4)
        {
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
        } 
        else 
        {
            printf("Please choose choose a correct method");
        }   
}
double arithmetic ()
{       
    int i,op,num1,num2;
    double result;
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
    if (op>0&&op<5)
    {
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    }
        switch (op)
        {
        case 1:
            result = num1 + num2;
            printf("The answer is %.2lf",result);
            break;
        case 2:
            result = num1 - num2;
            printf("The answer is %.2lf",result);
            break;
        case 3:
            result = num1 * num2;
            printf("The answer is %.2lf",result);
            break;
        case 4:
            result = num1 / num2;
            printf("The answer is %.2lf",result);
            break;
        default:
        printf("Please choose a correct operator");
            break;
     } 
}
double pythagorastheorem ()
{   
    int index,a,b,c,position;
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
        printf("a is %.2f",sqrt(pow(c,2)-pow(b,2)));
    }
 else if(position == 2)  
    {
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of c: ");
        scanf("%d",&c);
        printf("b is %.2f",sqrt(pow(c,2)-pow(a,2)));
    }
else if(position == 3)
    {
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        printf("c is %.2f",sqrt(pow(a,2)+pow(b,2)));
    }
else{  
        printf("Please choose a correct side");
    }   
}
int main ()
{   
    int option,chosen,wati;
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

        if (chosen==1)
        {
            printf("%lf",trigonometry());
        }
        else if (chosen==2)
        {
            printf("%lf",squarepower());
        }
        else if (chosen==3)
        {
            printf("%lf",arithmetic());
        }
        else if (chosen==4)
        {
            printf("%lf",pythagorastheorem());
        }
        else
        {
            printf("invalid input make sure the number is present on the category");
        } 


        printf("\n\nPress 1 for Yes 2 for No");
        printf("\nDo you want to continue:");
        scanf("%d",&wati);
        }
 while(wati==1);

}