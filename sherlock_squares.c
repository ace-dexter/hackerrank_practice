#include<stdio.h>

#define MAX 100000

int square_check(long a, long b)
{
	long i = 0, j = 0;	
	int count = 0; 

	for (j = a; j <= b; j++)
	{
		if(j == 1)
		{
			count++;
		}
		else
		{
			for (i = 1; i <= j/2; i++)  //why to check from 1 to every number b??
			{
				if (i*i == j)
				{
					count++;
					break;
				}
			}
		}
	}

	return count;
}


int main()
{
	long a = 0, b = 0;
	int t = 0, count[MAX] = {0}, i = 0;
	int size = 0;

	scanf("%d", &t);
	if(t >= 1 && t <= 100)
	{ 
		for(i = 0; i < t; i++)
		{
			scanf("%ld%ld", &a, &b);
			if((a >= 1 && a <= b) &&
				(b >= a && b <= 1000000000))
			{
				count[i] = square_check(a, b);
				if (count[i] >= 0)
				{
					size++;
				}
			}	 
		}
	}
	for(i = 0; i < size; i++)
	{
		printf("%d\n", count[i]);
	}
//	printf("size %d \n", size);

	return 0;
}
