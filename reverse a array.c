#include<stdio.h>
void  rev(int *p,int n)
{
     int i;
     for(i=n-1;i>=0;i--){
          printf("%d ", *(p+i));
     }
     printf("\n");
}
int main()
{
     int a[10000],i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++){
           scanf("%d",&a[i]);
     }
     rev(a,n);
}
