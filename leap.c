#include<stdio.h>   
int main() 
{  
  int inputYear = 0;  
    printf("Enter a year to check if it is leap year: ");  
    scanf("%d", &inputYear);  
    if(((inputYear%4==0) && (inputYear%100!=0)) || (inputYear%400==0))  
    {  
        printf("%d is a leap year", inputYear);  
    } 
}  