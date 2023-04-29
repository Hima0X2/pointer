#include<stdio.h>
int main()
{
     int m=10,n,o,*z;
     z=&m;
     printf("the address of &m is : %d\n",&m);
      printf("the address of &n is : %d\n",&n);
       printf("the address of &o is : %d\n",&o);
        printf("the address of &z is : %d\n",&z);
         printf("the address of m is : %d\n",*z);
     return 0;
}
