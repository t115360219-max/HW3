#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod);

int main(void)
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi:\n");
    hanoi(n, '1', '3', '2'); 

    system("pause");
    return 0;
}
void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("1 從柱子 %c 移動到柱子 %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("%d 從柱子 %c 移動到柱子 %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}
