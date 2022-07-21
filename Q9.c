#include<stdio.h>
int main()
{
    int a; char b; double c; float d;
   sizeof("a");
   printf("size of int is  %d bytes \n",sizeof(a));
   printf("size of character is %d bytes \n",sizeof(b));
   printf("size of double is %d bytes \n",sizeof(c));
   printf("size of float is %d bytes",sizeof(d));
   return 0;
}
