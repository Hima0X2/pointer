#include<stdio.h>
int main()
{
     int *ab,m=29;
     printf("Address of m is %p\n",m);
     printf("Value of m is %d\n",m);
     ab=&m;
     printf("Address of pointer ab : %d\n",ab);
     printf("Content of pointer ab : %d\n",*ab);
     m=34;
     printf("Address of pointer ab : %d\n",ab);
     printf("Content of pointer ab : %d\n",*ab);
     m=7;
     printf("Address of pointer ab : %d\n",ab);
     printf("Content of pointer ab : %d\n",*ab);
     return 0;
}
