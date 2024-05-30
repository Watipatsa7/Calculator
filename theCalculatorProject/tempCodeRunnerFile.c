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