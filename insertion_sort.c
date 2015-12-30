#include<stdio.h>

void insertion_sort(int a[], int n){
	
	int i,j,key;
	for(i = 1; i<n; i++)
	{
		j = i-1;
		key = a[i];
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}

}

int main()
{
	int i,n,k;
	scanf("%d",&n);
	int a[n+1];
	for(i = 0; i< n; i++)
		scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("after sorting\n");
	for(i = 0; i< n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
