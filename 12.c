#include <stdio.h>
void main()
{
   int n, i, arr1[15];
   int *pt;
scanf("%d",&n);
   for(i=0;i<n;i++)
      {
           pt = &arr1[i];
	  scanf("%d",pt);
	  }
   for (i = n; i > 0; i--)
   {
      printf("%d\n",*pt);
      pt--;
   }
   return 0;
}
