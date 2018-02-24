#include<stdio.h>
#include<math.h>

#define MAX 100000

int square_check(long a, long b)
{
//	long j = 0;	
	int count = 0; 

	count = (floor(sqrt(b))-ceil(sqrt(a))+1);
	
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
	return 0;
}
