#include<stdio.h>
int main()
{
     int p=5,q=6,r=7,temp,*a,*b,*c;
     printf("The value before swapping are :element 1 = %d \nelement 2 =%d \nelement 3 = %d\n",p,q,r);
     a=&p;
     b=&q;
     c=&r;
     printf("The value after swapping are :");
     temp=p;
     p=q;
     q=r;
     r=temp;
     printf("element 1 = %d\n",*a);
     printf("element 2 = %d\n",*b);
     printf("element 3 = %d\n",*c);
 return 0;
}
