#include<stdio.h>
#define inf 999999999
int n;

void mergeSort(int a[],int low,int mid,int high){

	int n1,n2,i,j,k;
	n1 = mid - low + 1;
	n2 = high - mid;
	int l[n1+2],r[n2+2];
	for(i = 1; i <= n1; i++)
		l[i] = a[low+i-1];
	l[n1+1] = inf;
	for(j = 1; j <= n2; j++)
		r[j] = a[mid + j];
	r[n2+1] = inf;
	i = 1;
	j = 1;
	for(k = low; k<=high; k++)
	{
		if(l[i] <= r[j])
		{	
			a[k] = l[i];
			i++;
		}
		else{
			a[k] = r[j];
			j++;
		}
	}
	
}

void partition(int arr[],int low,int high){

    int mid;
	
    if(low<high){
		
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

int main()
{
    int i;
    scanf("%d",&n);
	int merge[n+1];
    for(i=1;i<=n;i++){
         scanf("%d",&merge[i]);
    }
    partition(merge,1,n);
    for(i=1;i<=n;i++){
         printf("%d ",merge[i]);
    }

   return 0;
}



