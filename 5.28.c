#include <stdio.h>
#include <stdlib.h>

char changeCase(char c);

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Original: %c\n", ch);
    printf("Changed: %c\n", changeCase(ch));

    system("pause");
    return 0;
}

char changeCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (char)(c + 32);
    }
    else if (c >= 'a' && c <= 'z')
    {
        return (char)(c - 32);
    }
    return c;
}