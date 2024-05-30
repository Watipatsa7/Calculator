#include <stdio.h>

// double total_interest(int principal,int rate,int days)
// {
//     double interest = principal * rate * days / 365;
//     printf("%f",&interest);
//     return 0;
// }

int main(void)
{
    int principal;
    int days;
    int rate;

    printf("Enter the amount of principal:");
    scanf("%d",&principal);
    printf("Enter the rate for the loan taken:");
    scanf("%d",&rate);
    printf("Enter number of days you are using the loan:");
    scanf("%d",&days);

    printf("Interest is %d",(principal*days*rate/365));
}