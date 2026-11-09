#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int n = 0;
    unsigned long long int current = 0;
    unsigned long long int previous = 0;

    printf("Calculating Fibonacci series up to system limit:\n");

    while (1)
    {
        current = fibonacci(n);
        if (n > 1 && current < previous)
        {
            printf("System limit reached at n = %u.\n", n - 1);
            printf("Max Fibonacci number = %llu\n", previous);
            break;
        }

        printf("fibonacci(%u) = %llu\n", n, current);
        previous = current;
        n++;
    }

    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    unsigned long long int fib1 = 0;
    unsigned long long int fib2 = 1;
    unsigned long long int temp = 0;

    for (unsigned int i = 2; i <= n; i++)
    {
        temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
    }

    return fib2;
}