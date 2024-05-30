#include <stdio.h>
#include <stdlib.h>

int main()
{
      printf("how can i help you \n");
    printf("1.addition\n");
    printf("2.subtraction \n");
    printf("3.maltiplication \n");

    int num1;
    int num2;

    printf("enter first number:");
    scanf("%d" ,&num1);

    printf("enter second number:");
    scanf("%d" , &num2);

     int operator;

    printf("enter operator:");
    scanf("%d", &operator);

    if(operator==1){
         int result1 =num1 + num2;
        printf("answer:%d" , result1);
    }
    else if(operator==3){
        int result2= num2 * num1;
        printf("answer:%d" ,result2);
    }
    else{
        int result3=num2 - num1;
        printf("answer:%d" , result3);
    };
}
