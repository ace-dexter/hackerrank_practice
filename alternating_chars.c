#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100000

long delete_count(char *str, long len)
{
	long i = 0, j = 0, k = 0;
	long count = 0;

//	printf("In the delete_count\n\n");
	for(i = 0; i < strlen(str); i++)
	{
		while(1)
		{
			k = i+1;
			if(str[i] == str[k])
			{
				count++;
				for(j = i; str[j] != '\0'; j++)
				{
					str[j] = str[j+1];
				}
			}
			else
			{
				break;
			}
		}
	}
	return count;
}

int main()
{
	int t = 0;
	char *str = NULL;	
	long i = 0, len = 0, count = 0;
	long arr[SIZE] = {0};

	scanf("%d ",&t);
	str = (char *)calloc(SIZE, sizeof(char));
	if(NULL == str)
	{
		printf("Memory Allocation Failed.\n");
		return -1;
	}
	if(1 <= t && t <=10)
	{
		for(i = 0; i < t; i++)
		{
//			fgets(str, sizeof(str), stdin);
/*			if(NULL == ret)
			{
				printf("Reading faied or no characters to read.\n");
				return -1;
			}
*///			printf("Scanf\n");
			scanf("%s", str);
			len = strlen(str);
			if(str[strlen(str)-1] == '\n')
			{
				str[strlen(str)-1] = '\0';
			}
			if(1 <= len && len <= 100000)
			{
				count++;
				arr[i] = delete_count(str, len);
			}
		}
	}
	for(i = 0; i < count; i++)
	{
		printf("%ld\n", arr[i]);
	}
	free(str);
	str = NULL;
		
	return 0;
}
