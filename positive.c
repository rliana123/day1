#include <stdio.h>
int main()
{
    short int inputNumber = 0;
    puts("Enter a number to check if it is positive");
    scanf("%d", &inputNumber);
    if (inputNumber > 0)
        printf("%d is a positive number", inputNumber);
    return 0;
}
