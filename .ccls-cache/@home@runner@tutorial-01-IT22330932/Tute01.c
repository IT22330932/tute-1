/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  int avg;

  printf("Enter 1st marks =");
  scanf("%d", &mark1);

  printf("Enter 2nd marks =");
  scanf("%d", &mark2);

    avg= (mark1+mark2)/2;

    printf("avg is : %d" , avg);
  
  return 0;
}

