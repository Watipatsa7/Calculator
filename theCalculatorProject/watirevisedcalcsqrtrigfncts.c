#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chosen;
    int option;
    int i,b,c;
    int op;
    int wati;
    int method;
    int num1, num2;
    double result;

    char category[4][30]={
        "Trigonometry",
        "Power and SquareRoot",
        "joy",
    };

    for (option = 0; option < 4; option++)
    {
     printf("%d. %s \n", option+1, category[option]);
    }
    }
