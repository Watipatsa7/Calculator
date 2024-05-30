#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int index;
    int a,b,c;
    int position;

   printf("Select position not the side\n");
   char side[3][3] = 
   {
    "a",
    "b",
    "c",
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
        printf("a is %f",sqrt(pow(c,2)-pow(a,2)));
    }
else if(position == 3)
    {
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        printf("a is %f",sqrt(pow(a,2)+pow(b,2)));
    }
else 
    {
        printf("Invalid input");
    }
}