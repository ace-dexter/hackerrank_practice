#include<stdio.h>
int main()
{
	int num, i, max = 0;
	int arr[32] = {0}, size = 0;
	int rem = 0, count = 0;

	scanf("%d", &num);
	while(num > 0)
	{
		rem = num%2;
		num = num/2;
		arr[count] = rem;
		count++;
	}
	for(i = 0; i<count; i++)
		printf("%d\t", arr[count-1-i]);
	printf("count %d\n", count);
	size = count;
	count = 0;

	printf("size %d\n", size);
	for(i = 0; i < size; i++)
	{
		if(arr[i] == 1)
		{
			count++;
			if(i < size-1)
				continue;
		}
		if(count >= max)
		{
			max = count;
		}
		count = 0;
	}
	printf("max = %d\n", max);

	return 0;
}
