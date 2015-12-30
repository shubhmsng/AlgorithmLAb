#include<stdio.h>

int lin_search(int a[], int n, int k,int i)
{
	if(i == n){
		printf("Not Found");
		return 0;
	}
	else if(a[i] == k)
	{
		printf("Found at place %d",i+1);
		return 1;
	}
	else{
		lin_search(a,n,k,i+1);
	}
}

search(int a[],int n, int k)
{
	lin_search(a,n,k,0);
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