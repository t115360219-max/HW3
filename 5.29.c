#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);
int gcd(int a, int b);

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    system("pause");
    return 0;
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    return (a * b) / gcd(a, b);
}