#include<stdio.h>
int main() 
{
  int inputNumber1 = 0, inputNumber2 = 0;
  printf("Enter the two numbers: ");
  scanf("%d  %d", &inputNumber1, &inputNumber2);
  if (inputNumber1 > inputNumber2)
  {
    printf("%d is larger than %d", inputNumber1, inputNumber2);
    }
   else
   {
    printf("%d is larger than %d", inputNumber2, inputNumber1);
   }
}