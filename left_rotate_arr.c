#include <stdio.h>
#define MAX 100000

int main()
{
	long arr[MAX];
	long i, j, temp;
	long n, d;

	scanf("%ld%ld", &n, &d);
	if((1 <= n && 100000 >= n) && (1 <= d && n >= d))
	{
		for(i = 0; i < n; i++)
		{
			scanf("%ld", &arr[i]);
			if(arr[i] < 1 || arr[i] >= 1000000)
			{
				return -1;
			}
		}
		if(n == d)
		{
			;	/*If n=d, do nothing*/
		}
		else
		{
			/*First loop is for selecting the 1st element*/
			for(i = 0; i < d; i++)
			{
				temp = arr[0];
				for(j = 0; j < n-1; j++)	/*this loop is for shifting each element to left*/
				{
					arr[j] = arr[j+1];
				}
				arr[n-1] = temp;
			}
		}
		for(i = 0; i < n; i++)
		{
			printf("%ld ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
