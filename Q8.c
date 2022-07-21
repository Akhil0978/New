#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no. ");
    scanf("%d",&a);
    int result = a&1;
    if (result ==1)
    {
        printf("The no is odd ");
    }
    else
    {
        printf("The no. is even");
    }
   return 0;
}
