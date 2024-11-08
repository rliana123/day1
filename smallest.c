#include<stdio.h>
int main() 
{
    int inputNum1 = 0, inputNum2 = 0, inputNum3 = 0;
    printf("Enter three numbers: ");
    scanf("%d  %d  %d" , &inputNum1, &inputNum2, &inputNum3);
    if (inputNum1 < inputNum2 && inputNum1 < inputNum3)
    {
        printf("%d is smaller than the other two numbers.", inputNum1);
    }
    else if (inputNum2 < inputNum1 && inputNum2 < inputNum3)
    {
        printf("%d is smaller than the other two numbers.", inputNum2);
    }
    else
    printf("%d is smaller than other two numbers.", inputNum3);
}