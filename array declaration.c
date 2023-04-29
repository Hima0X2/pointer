#include<stdio.h>
int max(int array[10],int n,int i)
{
    return array[i];
}
main ()
{
    int array[10],n,i,result;
    printf("How many number do u want \n");
    scanf("%d",&n);
    printf("plz....Enter the number of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     for(i=0;i<n;i++)
    {
     result = max(array,n,i);
    printf("%d ",result);
    }
    printf("\n");
}

