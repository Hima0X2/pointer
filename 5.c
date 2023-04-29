#include<stdio.h>
int main()
{
     int a=5,b=6,*p,*q;
     p=&a;
     q=&b;
     if(*p<*q)
     {
          printf("%d is the maximum number\n",*q);
     }
     else
     {
          printf("%d is the maximum number\n",*p);
     }
     return 0;
}
