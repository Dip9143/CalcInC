/*
Coded by Dip Kumar Majumder
09-08-2024 at 22:00
*/
#include<stdio.h>

int main()
{
    printf("Simple Calculator\n");

    char op; // Operator
    printf("Enter the operator (+, -, /, *): ");
    scanf(" %c", &op); // Added a space before %c to handle any leading whitespace

    float num[2];
    float res;
    // Taking input from the user
    printf("Enter the numbers: ");
    scanf("%f %f", &num[0], &num[1]);

    switch (op)
    { 
    // Checking the operator to proceed with the calculation
    case '+':
        res = num[0] + num[1];
        break;
    case '-':
        res = num[0] - num[1];
        break;
    case '*':
        res = num[0] * num[1];
        break;
    case '/':
        if (num[1] != 0)
        {
            res = num[0] / num[1];
        }
        else
        {
            printf("Error: Division by zero is undefined.\n");
            return 1; // Exit with an error code
        }
        break;
    default:
        printf("Invalid operator\n");
        return 1; // Exit with an error code
    }

    // Result
    printf("%.0f %c %.0f = %.2f\n", num[0], op, num[1], res);

    return 0;
}
