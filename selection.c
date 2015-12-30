#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int a[], int n){
	
	int i,j;

	for (j = 0; j < n-1; j++) {
		int Min = j;
		
		for ( i = j+1; i < n; i++) 
		{
			if (a[i] < a[Min]) 
				Min = i;
		}

		if(Min != j) 
			swap(&a[j], &a[Min]);
   }
}

int main()
{
	int i,n,k;
	scanf("%d",&n);
	int a[n+1];
	for(i = 0; i< n; i++)
		scanf("%d",&a[i]);
	selection_sort(a,n);
	printf("after sorting\n");
	for(i = 0; i< n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
