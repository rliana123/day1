#include<stdio.h>
#include<ctype.h>
int main() 
{
    char inputChar = '\0';
    printf("Enter the character to be checked: ");
    scanf("%s" ,&inputChar);
    if (isdigit(inputChar))
    {
      printf("The character is a digit.");
     }
    else if (isalpha(inputChar))
    {
      printf("The character is an alphabet.");
     }
    else
      printf("The character is a symbol.");
}
