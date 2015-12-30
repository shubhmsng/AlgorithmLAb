#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int heap_size;

void max_heapify(int a[], int i)
{
	int l = 2*i;
	int r = 2*i+1;
	int largest;
	if(l <= heap_size && a[l] > a[i])
		largest = l;
	else 
		largest = i;
	if(r <= heap_size && a[r]>a[largest])
		largest = r;
	if(largest!=i)
	{	
		swap(&a[i],&a[largest]);
		max_heapify(a,largest);
	}
}

void build_max_heap(int a[],int n)
{
	heap_size = n;
	int i;
	for(i =n/2; i>=1; i--)
	{
		max_heapify(a,i);
	}
}

void heap_sort(int a[],int n)
{
	build_max_heap(a,n);
	int i;
	for(i = n; i >= 1; i--)
	{
		swap(&a[1],&a[i]);
		heap_size = heap_size-1;
		max_heapify(a,1);
	}
}

int main()
{
	int i,n,k;
	scanf("%d",&n);
	int a[n+1];
	for(i = 1; i<=n; i++)
		scanf("%d",&a[i]);
	heap_sort(a,n);
	printf("after sorting\n");
	for(i = 1; i<=n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}