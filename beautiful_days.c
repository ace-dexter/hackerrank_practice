#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long unsigned reversed(long unsigned);

int main() {
    
    long unsigned i, j, k, rev;
    long unsigned count = 0;
    
    scanf("%lu%lu%lu", &i, &j, &k);
    if((1 > i || 2000000 < i) || (i > j || 2000000 < j))
       return -1;
    
    //for(p = 0; p < (j-i+1); p++)
       while(i != j)
       {
           rev = reversed(i);
           if((abs(i-rev)%k) == 0)
               count++;
           i++;
       }
        printf("%lu", count);
       
    return 0;
}

long unsigned reversed(long unsigned num)
{
    int digit;
    long unsigned sum = 0;
    while(num > 0)
        {
            digit = num%10;
            num = num/10;
            
            sum = sum*10 + digit;
    }
    return sum;
}
