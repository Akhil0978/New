#include<stdio.h>
int main()
{
   float  inr;
   printf("Enter the amount in rupees ");
   scanf("%f",&inr);
   float usd = inr/76.23;
   printf("The amount in dollars is %f ",usd);
   return 0;
}
