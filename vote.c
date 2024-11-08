#include<stdio.h>
int main(){
    int inputAge = 0;
    printf("Age based voting eligibity.\n");
    printf("Enter the age of the person: ");
    scanf("%d", &inputAge);
    if (inputAge>=18)
      printf("The person is eligible for voting.");
    return 0;
}
