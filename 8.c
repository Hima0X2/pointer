#include<stdio.h>
int main()
{
     int a[10]={1,3,5,7,9},i,*p,*q,sum=0;
     for(i=0;i<10;i++)
     {
          q=&a[0];
          p=&a[i];
          if(*p>*q)
          {
               sum=*p;
          }
          else
          {
               sum=*q;
          }
     }
     printf("maximum value : %d\n",sum);
}
