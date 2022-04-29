/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
void maximum(int x,int y);
void minimum(int a,int b);
void multiply(int n,int m);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

void maximum(int x,int y)
{
   if(x<y)
      return y;
   else
      return x;
}
void minimum(int a,int b)
{
   if(a<b)
      return a;
   else
      return b;
}
void multiply(int n,int m)
{
   return n*m;
}
