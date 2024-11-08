 #include<stdio.h>
 #include <ctype.h>
 int main()
  {
        char inputChar = '\0' ;
        printf("Enter the character to be checked: ");
        scanf("%s", &inputChar);
        inputChar = tolower(inputChar);
        if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u' )
         printf("The alphabet is a vowel.");
    }