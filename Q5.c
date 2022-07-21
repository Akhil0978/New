#include<stdio.h>
int main()
{
    int a;
    printf("Enter a three digit no. : ");
    scanf("%d",&a);
    int rem=0 ,sum=0;
    rem= a%10;
    a=a/10;
    sum=sum+rem;
    rem= a%10;
    a=a/10;
    sum=sum+rem;
    rem= a%10;
    a=a/10;
    sum=sum+rem;
    printf("The sum of the digits is %d ", sum);
    return 0;
}
