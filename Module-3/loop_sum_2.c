#include <stdio.h>

int main()
{
    int i;
    long long sum = 0;
    for (i = 1; i <= 100000; i++)
        sum += i;
    printf("Sum is: %lld\n", sum);
    return 0;
}