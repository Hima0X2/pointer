#include<stdio.h>
void findMaxMin(int *maxi, int *mini, int *currentNumber){
	if(*currentNumber > *maxi) *maxi = *currentNumber;

	if(*currentNumber < *mini) *mini = *currentNumber;
}

int main()
{
     int max,min,a[1000],i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     max=a[0];
     min=a[0];
    for(i=1; i<n; i++){
		findMaxMin(&max, &min, &a[i]);
    }
    printf("Min=%d\n",min);
    printf("Max=%d\n",max);
}
