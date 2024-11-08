#include <stdio.h>
int main()
{
    char inputChar ;
    puts("Enter a character to check if it is Uppercase");
    scanf("%s", &inputChar);
    if (inputChar >= 'A' && inputChar <= 'Z')
      {  printf("%s is Uppercase character", inputChar);
      }
      return 0;
}