#include<stdio.h>
#include<stdlib.h>

/*Program to find the square-root of the given number using binary search*/
float xsqrt(float n)
{
    float low = 0.0;
    float high, mid;

    high = n + 1;

    while((high - low) > 0.000001 )
    {
        mid = (low + high)/2;
        if((mid*mid) < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}

int main()
{
    float num = 0;
    float ans = 0;

    printf("\nEnter a number:");
    scanf("%f", &num);
    ans = (float)xsqrt(num);

    printf("\nThe square root of %f is %f.\n", num, ans);

    return 0;

    getchar();
}
