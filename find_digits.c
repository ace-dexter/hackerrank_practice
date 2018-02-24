#include<stdio.h>
#include<stdlib.h>

#define MAX 1000000000
#define DIGIT 10

/*Function for storing digits of a number into
 an array and find its length*/
int *arr_fun(long n, int *len)
{
    int *arr = NULL;
    int i;
    long num;

    num = n;
    for(i = 0; num != 0; i++)
    {
        num = num/10;
    }
    arr = (int *)calloc(i, sizeof(int));
    if(NULL == arr)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for(i = 0; n != 0; i++)
    {
        arr[i] = n%10;
        n = n/10;
        (*len) = (*len) + 1;
    }
    return arr;
}

int main()
{
    long n = 0;
    int t = 0, len = 0, carr[DIGIT] = {0};
    int i = 0, j = 0, count = 0;
    int *arr_new = NULL;

    (void)scanf("%d", &t);
    if(1 <= t && t <= 15)
    {
        for(i = 0; i < t; i++)
        {
            (void)scanf("%d", &n);
            if (0 < n && n < MAX)
            {
                len = 0;
 /*               arr_new = (int *)calloc(100, sizeof(int));
                if(NULL == arr_new)
                {
                    printf("Memory allocation failed.\n");
                    return -1;
                }
 */             arr_new = arr_fun(n, &len);

                //These 3 printfs:
 //               printf("\nlength = %d, arr_new[0] = %d, arr_new[1] = %d\n", len, arr_new[0], arr_new[1]);
 //               printf("\nlength = %d, arr_new[0] = %d, arr_new[1] = %d\n", len, *arr_new, *(arr_new+1));

                for(j = 0; j < len; j++)
                {
                    if((*(arr_new+j) != 0)
                        && (n % (*(arr_new+j))) == 0)
                    {
                        count++;
                    }
                }
                carr[i] = count;
                count = 0;
            }
        }
        for (j = 0; j < i; j++)
                printf("%d\n",carr[j]);
    }
    return 0;
}
