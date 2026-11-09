#include <stdio.h>
#include <stdlib.h>

long power(long base, long exponent);

int main(void)
{
    long base, exponent;
    printf("Enter base: ");
    scanf("%ld", &base);
    printf("Enter exponent: ");
    scanf("%ld", &exponent);

    printf("%ld^%ld = %ld\n", base, exponent, power(base, exponent));

    system("pause");
    return 0;
}

long power(long base, long exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}