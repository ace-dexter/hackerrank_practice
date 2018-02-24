#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 10001

int main()
{
	int i, j;
	int t, count = 0, len = 0;
	char str[MAX], p;
	int status[10];

	printf("Enter t test cases:");
	scanf("%d", &t);
	while((p = getchar()) !='\n');
	if(1 <= t && 10 >= t)
	{
		for (i = 0; i < t; i++)
		{
			memset(str, 0, MAX);
			count = 0;

			fgets(str, MAX, stdin);
			if (str[strlen(str)-1] == '\n')
			{
				str[strlen(str)-1] = '\0';
			}
			len = strlen(str);
			printf("length = %d\n", len);
			if (2 <= len && 10000 >= len)
			{
				for(j = 0; j < len; j++)
				{
					if (abs(str[j+1] - str[j]) == abs(str[len-j-1] - str[len-1-j-1]))
					{
						count++;
					}
					else
						break;
				}
				if (count == (strlen(str) - 1))
				{
					status[i] = 1;
				}
				else
					status[i] = 0;
			}
			else
				return -1;
		}
		for(i = 0; i < t; i++)
		{	
			if(status[i] == 1)
				printf("Funny\n");
			else
				printf("Not Funny\n");
		}
	}
	return 0;
}
