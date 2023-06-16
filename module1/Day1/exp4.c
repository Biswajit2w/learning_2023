#include <stdio.h>

int main()
{
    float operand1, operand2, result;
    char operator;

    printf("Enter Number 1: ");
    scanf("%f", &operand1);

    printf("Enter the operator : ");
    scanf(" %c", &operator); 

    printf("Enter Number 2: ");
    scanf("%f", &operand2);

    switch (operator)
    {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
                result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }

    printf("Result: %.2f\n", result);

    return 0;
}

