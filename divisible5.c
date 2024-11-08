#include <stdio.h>
int main()
{
    int inputNum = 0;
    printf("Enter a number to check if it is divisible by 5: ");
    scanf("%d", &inputNum);
    if(inputNum % 5 == 0) 
    {
        printf("Number %d is divisible by 5", inputNum);
    }
return 0;
}