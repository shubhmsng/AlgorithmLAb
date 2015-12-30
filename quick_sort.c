#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[],int p, int r){

   int x, i = p-1, j;
   x = a[r];
   for (j = p; j<r; j++)
   {
	   if(a[j] <= x){
		   i++;
		   swap(&a[i], &a[j]);
	   }
   }
   swap(&a[i+1],&a[r]);
   return i+1;
}

int quick_sort(int a[], int p, int r)
{
	int q;
	if(p < r)
	{
		q = partition(a,p,r);
		quick_sort(a, p, q-1);
		quick_sort(a, q+1, r);
	}
	
}

int main()
{
    int i,n;
    scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    for(i=0;i<n;i++){
         printf("%d ",a[i]);
    }

   return 0;
}



