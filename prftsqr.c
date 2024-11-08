#include <stdio.h>
#include <math.h>
int main() 
{
  int inputNumber = 0 ;

    printf("Enter a number to be checked if it is a perfect square: ");
    scanf("%d", &inputNumber );
    if (sqrt(inputNumber) * sqrt(inputNumber) == inputNumber) 
    {
        printf("Given number is a perfect square.", inputNumber);
    }
    return 0;
}
