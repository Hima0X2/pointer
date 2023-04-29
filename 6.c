#include<stdio.h>
int main()
{
     int array[5]={5,4,3,2,1},i,*p;
     for(i=0;i<5;i++)
     {
          p=&array[i];
          printf("element - %d : %d\n",i,*p);
     }
     return 0;
}
