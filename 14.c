#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100],*p;
    int i=0,j;
   scanf("%s",x);
   p=&x;
   while(x!='\0')
   {
        i++;
   }
   for(j=i;j>0;j--)
   {
        y[j]=x[i];
   }
   y[j]='\0';
          scanf("%c\n",*p);
    return 0;
}
