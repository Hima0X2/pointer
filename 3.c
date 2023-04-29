#include<stdio.h>
int main()
{
     int m=300,*p;
     float fx=300.600006,*q;
     char cht='z',*r;
     printf("address of m = %p\n",m);
     printf("address of fx = %p\n",fx);
     printf("address of cht = %p\n",cht);
     printf("value of m = %d\n",m);
     printf("value of fx = %f\n",fx);
     printf("value of cht = %c\n",cht);
      p=&m;
     q=&fx;
     r=&cht;
     printf("address of m = %p\n",p);
     printf("address of m = %p\n",q);
     printf("address of m = %p\n",r);
      printf("value of m = %d\n",*p);
     printf("value of fx = %f\n",*q);
     printf("value of cht = %c\n",*r);
     return 0;
}
