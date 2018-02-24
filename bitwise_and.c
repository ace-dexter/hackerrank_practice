#include <stdio.h>

int main()
{
	int i, j, l, t, n, k;
//	int arr[1000] = {0};
	int res = 0;

	l = 0;
	printf("test cases:");
	scanf("%d", &t);
	if(1 <= t && 1000 >= t)
	{
		while(t >=1)
		{
			l = 0;
			printf("range and int of set: ");
			scanf("%d%d", &n, &k);
		
			if((2 <= n && 1000 >= n) || (2 <= k && n >= k ))
			{
				for (i = 0; i < n-1; i++)
				{
					for(j = i+1; j < n; j++)
					{
						res = (i+1)&(j+1);
						if((res > l) && (res < k))
						{
							l = res;
						}
					}
				}
				printf("%d\n", l);
			}
			t--;
		}
	}
}
