#include<stdio.h>
int main()
{
     int num1=5,num2=6,*p,*q,sum;
     p=&num1;
     q=&num2;
     sum=*p+*q;
     printf("The sum of the entered numbers is : %d\n",sum);
     return 0;
}
