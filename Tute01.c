/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float sub1, sub2, avg;

  printf("Enter Marks of Sub 1 :");
  scanf("%f",&sub1);

  printf("Enter Marks of Sub 2 :");
  scanf("%f",&sub2);

  avg = (sub1+sub2)/2;

  printf("Avg of two subjects = %.2f",avg);

  return 0;
}

