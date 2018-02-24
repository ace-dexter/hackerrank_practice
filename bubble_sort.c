#include<stdio.h>

#define MAX 2000000

int main()
{
	long arr[MAX];
	int i, j, n, temp;
	int swaps = 0;

	scanf("%d", &n);
	if(2 <= n && 600 >= n)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%ld",&arr[i]);
			if(1 > arr[i] || MAX <= arr[i])
			{
				return -1;
			}
		}
		for(i = 0; i < n-1; i++)
		{
//			swaps = 0;

			for(j = 0; j < n-1; j++)
			{
				if(arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					swaps++;
				}
			}
			if(swaps == 0)
			{
				break;
			}
		}
		printf("Array is sorted %d swaps.\n", swaps);
		printf("First Element: %ld\n", arr[0]);
		printf("Last Element: %ld\n", arr[n-1]);
	}
	return 0;
}
