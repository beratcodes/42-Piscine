#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;

    char numbers[3];

    a = 5;
    b = 2;

    ft_swap(&a, &b);
    numbers[0] = a + '0';
    numbers[1] = ':';
    numbers[2] = b + '0';

    write(1, numbers, 3);

    return (0);
}