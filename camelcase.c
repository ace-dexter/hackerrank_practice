#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100000

int main()
{
	char *str=NULL;
	long i, len, count = 1;

	str = (char *)calloc(MAX, sizeof(char));
	if(NULL == str)
	{
		printf("Memory allocation failed");
		return -1;
	}
	fgets(str, MAX-1, stdin);

	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}
	len = strlen(str);
	printf("len = %ld---\n", len);
	for(i = 0; i < len; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			count++;
		}
	}
	printf("%ld",count);
	free(str);
	str = NULL;
	
	return 0;
}
