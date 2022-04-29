/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2,sum;
   float average;
   
   printf("enter the mark1:");
   scanf("%d",&mark1);
   printf("enter the mark2:");
   scanf("%d",&mark2);
   
   sum=mark1+mark2;
   average= sum/2;
   
   printf("avaerage is %.2f",average);
  
  return 0;
}

