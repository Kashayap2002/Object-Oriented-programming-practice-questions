#include <stdio.h>
int main() {
int number, reverse = 0, remainder,p;

  printf("Enter any number: ");
  scanf("%d", &number);

  for(p=number;number!=0;number=number/10)
   {
    remainder = number%10;
    
    reverse = reverse * 10 + remainder;
   
  }
printf("Reversed number = %d", reverse);

  return 0;
}