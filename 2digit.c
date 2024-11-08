#include<stdio.h>
int main() 
{
    int inputNumber = 0 ;
    printf("Enter a number to be checked if it is 2-digit number: ");
    scanf("%d", &inputNumber);
    if (inputNumber >= 10 && inputNumber <= 99)
    {
        printf("The number %d is 2 digit number." ,inputNumber);
    }
}