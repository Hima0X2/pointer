#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    int *i,y;
    scanf("%s",x);
     y=strlen(x);
     i=&y;
     printf("The length of the given string w3resource is : %d\n",*i);
     return 0;
}
