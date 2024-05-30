#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    float num1 ;
    float num2 ;
    int op;
    int wati =1;


    {
        do
        {
    printf("\n1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Choose operator:");
    scanf("%d",&op);

    printf("Enter First Number:");
    scanf("%f",&num1);
    printf("Enter Second Number:");
    scanf("%f",&num2);

    if(op ==1)
    {
        printf("The answer is:%f",(num1+num2));
    }
    else if(op==2)
    {
        printf("The answer is:%f",(num1-num2));
    }
    else if(op==3)
    {
        printf("The answer is:%f",num1*num2);
    }
    else if(op==4)
    {
         if(num2==0)
            {
                printf("Division by zero is invalid");
            }
            else
            {
        printf("The answer is:%f",num1/num2);
            }
    }
      printf("\n\nPress 1 For yes");
      printf("\nPress 2 For no");
      printf("\nDo you want to continue:");
      scanf("%d",&wati);
    } while (wati==1);
}
}
