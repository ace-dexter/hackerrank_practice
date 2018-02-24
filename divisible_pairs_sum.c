#include<stdio.h>

int main()
{
	int arr[100];
	int i, j, k, n;
	int count = 0;

	scanf("%d", &n);
	if( 2 <= n && 100 >= n)
	{
		scanf("%d", &k);
		if(1 <= k && 100 >= k)
		{
			for(i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
				if(0 >= arr[i] || 100 < arr[i])
					return -1;
			}
			for(i = 0; i < n; i++)
			{
				for(j = i+1; j<n; j++)
				{
					if((arr[i]+arr[j]) % k == 0)
						count++;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}
