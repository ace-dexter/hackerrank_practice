#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10000
#define MAX 50

int check_palindrome(char *str)
{
	int len = 0, count = 0;
	int i = 0;

	len = strlen(str);
//	printf("%s", str);
	if(len == 1)
	{
		return count;
	}
	else
	{
		for(i = 0; i < len/2; i++)
		{
			while(1)
			{
				if(str[len-1-i] > str[i])
				{
					(str[len-i-1])--;
				}
				else if(str[len-1-i] < str[i])
				{	
					(str[i])--;
				}
				else if(str[len-i-1] == str[i])
				{
					break;
				}
//				printf("%c---%c\n", str[i], str[len-1-i]);
				count++;
			}
		}
		return count;
	}
}


int main()
{
	char *str = NULL;
	int i = 0, t = 0, len = 0, arr[MAX];
	char c;

	str = (char *)malloc(SIZE*sizeof(char));
	if (NULL == str)
	{
		printf("Memory Allocation failed.\n");
		return -1;
	}
	scanf("%d", &t);
			while((c = getchar()) != '\n' && c != EOF)
			{
				;
			}
	if(1 <= t && t <= 10)
	{
		for(i = 0; i<t; i++)
		{
			memset(str, 0, SIZE);
			fgets(str, SIZE-1, stdin);
			if(str[strlen(str)-1] == '\n')
			{
				str[strlen(str) -1] = '\0';
			}

			len = strlen(str);
			if(1 <= len && len <= SIZE)
			{
				arr[i] = check_palindrome(str);
			}
		}
	}

	for(i = 0; i<t; i++)
	{
		printf("%d\n", arr[i]);
	}
	free(str);
	str = NULL;

	return 0;
}
