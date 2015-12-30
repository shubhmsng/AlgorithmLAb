#include<stdio.h>

int bin_search(int a[], int k, int l,int r)
{
	
	if(l >= r)
	{
		printf("Not found");
		return 0;
	}
	else {
		int mid = (l+r)/2;
		
		if(a[mid]>k){
			bin_search(a, k, l, mid-1);
		}
		else if(a[mid] < k)
		{
			bin_search(a, k, mid+1, r);
		}
		else{
			printf("Found at index %d",mid+1);
			return 1;
		}
	}
}
void search(int a[],int n, int k)
{
	bin_search(a,k,0,n);
}

int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	search(a,n,k);
	return 0;
}
