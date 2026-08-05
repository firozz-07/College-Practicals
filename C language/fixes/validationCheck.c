#include <stdio.h>
int  main()
{
    char exp[20];
    int i, count = 0;
    printf("Enter Expression: ");
    scanf("%s", exp);
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            count++;
        if (exp[i] == ')')
            count--;
    }
    if (count == 0)
        printf("\nExpression is valid");
    else
        printf("\nExpression is invalid");
    return 0;
}