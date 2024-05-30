#include <stdio.h>
int main ()

{
    int num1;
    int num2;
    int op;
    
    printf("Select operation");
    printf("Select 1 for addition");
    printf("Select 2 for subtraction");
    printf("Select 3 for multiplication");
    printf("Select 4 for division");

    scanf("%d",&op);
    if (op==1)
    {
      printf("%d",num1+num2);                                                                                                             
    }
    else if (op==2)
    {
    printf("%d",num1-num2);
    }
    else if (op==3)
    {
        printf("%d",num1*num2);
    }
    else if (op==4)
    {
        printf("%d",num1/num2);
    }


}