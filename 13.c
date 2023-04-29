#include<stdio.h>
int main()
{
     char ch='A',*p;
     int i;
     //scanf("%c",&ch);
     p=&ch;
     for(i=65;i<91;i++)
     {
          printf("%c\n",*p);
          ch++;
     }
     return 0;
}
