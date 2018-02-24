#include<stdio.h>
#include<stdlib.h>

#define MAX 101

int main()
{
	int i, n;
	int arr[MAX] = {0};
	int index[MAX] = {0};
	int count=0;

	scanf("%d", &n);
	if(n < 1 || n>MAX)
		return-1;

	for(i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]<0 || arr[i]>MAX)
			return -1;
	}
	for(i=0; i<=n; i++)
	{
				index[arr[i]]++;
	}
	for(i=0; i<MAX; i++)
	{
		if(index[i]%2 == 0 || (index[i]-1)%2 == 0)
		{
			count = count + (index[i]/2);
		}
//		printf("index[%d] = %d\n", i,index[i]);
	}
	printf("%d", count);
	return 0;	
}

