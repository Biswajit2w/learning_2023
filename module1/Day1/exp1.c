#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter the two  number:\n");
    scanf("%d %d", &number1,&number2);
    if (number1 > number2 )
    {
        printf("The big number is %d" ,number1);
    }
    else
    {
        printf("the big number is %d", number2);
    }
    return 0;
}