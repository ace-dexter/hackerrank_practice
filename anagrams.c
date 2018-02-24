#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 10000

int main()
{
//	char *arr1 = NULL, *arr2 = NULL;
	char arr1[MAX], arr2[MAX];
	int i, count = 0, asci, len1, len2;
	int x[26] = {0}, y[26] = {0};

	
//	memset(arr1, 0, MAX);
//	memset(arr2, 0, MAX);
/*	arr1 = calloc(MAX, sizeof(char));
	if(NULL == arr1)
	{
		printf("Memory Alloc failed!\n");
		return -1;
	}
	arr2 = calloc(MAX, sizeof(char));
	if(NULL == arr2)
	{
		printf("Memory Alloc failed!\n");
		return -1;
	}
*/	
	scanf("%s%s", arr1, arr2);
	len1 = strlen(arr1);
	len2 = strlen(arr2);

	if((len1 > MAX || len2 > MAX))
		return -1;
	else
	{
		for(i = 0; i < len1; i++)
		{
			asci = arr1[i];
			x[asci-97] += 1;
		}
		
		for(i = 0; i < len2; i++)
		{
			asci = arr2[i];
			y[asci-97] += 1;
		}

		for(i = 0; i < 26; i++)
		{
			if (x[i] != y[i])
			{
				count = count + (x[i] > y[i]? (x[i] - y[i]): (y[i] - x[i]));
			}
		}
		printf("%d", count);
	}
//	free(arr1);
//	free(arr2);

	return 0;
}
