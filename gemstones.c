#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 100

int count_gem(char ch, char *rocks, int *found)
{
	int j;
	int len = 0;

	len = strlen(rocks);
//	printf("rocks %s \n", rocks);
	for(j = 0; j < len; j++)
	{
		if(ch == rocks[j])
		{
			*found = 1;
			return 0;
		}
		else
		{
			*found = 0;	
		}
	}
	return 0;
}

int main()
{
	int i = 0, j = 0, n = 0, len = 0;
	char ch;
	char **rocks = NULL;
	char top_rock[SIZE];
	int count = 0;
	int found = 0;
	char str[SIZE];

	scanf("%d",&n);	//no of rocks
	while((ch = getchar() != '\n') && (ch != EOF))
	{
		;
	}

	if(1 <= n && n <= 100)
	{//	printf("In if,,,\n");
		rocks = (char **)malloc(n*sizeof(char *));
		if (NULL == rocks)
		{
			printf("Memory Allocation Failed.\n");
			return -1;
		}
		for(i = 0; i < n; i++)
		{
			
			memset(str, 0, SIZE);
			fgets(str, SIZE - 1, stdin);
			if(str[strlen(str) - 1] == '\n')
			{
				str[strlen(str) - 1] = '\0';
			}
			rocks[i] = (char *)malloc((SIZE+1)*sizeof(char));
			if(NULL == rocks[i])
			{
				printf("Memory Allocation Failed.\n");
				return -1;
			}
			strcpy(rocks[i], str);
			len = strlen(str);
			if(1 <= len && len <= SIZE)
			{
			//	printf("str = %s, rocks[%d] = %s\n", str, i, rocks[i]);
				continue;
			}
			else
			{
				return 0;
			}
		}
		strcpy(top_rock, rocks[0]);
		len = strlen(top_rock);	//updating the len
		if (1 == n)
		{
			for(i = 0; i < len; i++)
			{
				if (top_rock[i] == top_rock[i-1] && i != 0 && i > 0)
				{	
					continue;
				}
				count++;
			}
		}
		else
		{
			for(j = 0; j < len; j++)	//select a letter from top and check it into next
			{
				if (top_rock[j] == top_rock[j-1] && j != 0 && j > 0)
				{
					continue;
				}
				else
				{
				//	printf("selected char top_rock[%d] = %c\n", j, top_rock[j]);
					for(i = 1; i < n; i++)		//take input of next rock
					{	
						count_gem(top_rock[j], rocks[i], &found);
						if(found == 0)
						{
							break;
						}
					}
				}
					if(found == 1)
					{
						count++;
					}
					else
					{
						found = 0;
					}
			}
		}	
		printf("%d\n", count);
	}
	return 0;
}
