#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 1000

void check_pangram(char *str)
{
	int asci = 65;
//	int len = 0;
	int j = 0, i = 0, flag = 1;

	int len = strlen(str);

	for(i = 0, asci = 65; i < 26; i++, asci++)
	{
		for(j = 0; j < len; j++)	//loop comparing an ascii to every char of str
		{
			if(str[j] == ' ')
			{
				j++;
			}
//			printf("asci = %d---str[%d] = %c, str[%d] = %d\n", asci,j, str[j], j, (int)str[j]);
			if((asci == (int)str[j]) ||
			  ((asci + 32) == (int)str[j]))
			{
//				printf("\ni = %d\n", i);
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if(flag == 1)
	{
		printf("not pangram\n");
	}
	else
	{
		printf("pangram\n");
	}

}



int main()
{
	char *str = NULL;

	str = (char*)malloc(SIZE*sizeof(char));
	if (NULL == str)
	{
		printf("Memory Allocation Failed.\n");
		return -1;
	}

	memset(str, 0, SIZE);
	fgets(str, SIZE, stdin);
	if(str[strlen(str)-1] == '\n')	//initially tried with 'if' here
	{
		str[strlen(str)-1] = '\0';
	}
	if(1 <= strlen(str) && strlen(str) <= 1000)
	{
	//	printf("The line is: %s\n", str);
		check_pangram(str);		//function to check pangram
	}
	return 0;
	
}
