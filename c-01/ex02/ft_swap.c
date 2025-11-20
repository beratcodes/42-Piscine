#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int a;
    int b;
    char number[3];

    a = 9;
    b = 5;

    ft_swap(&a, &b);

    number[0] = a + '0';
    number[1] = ':';
    number[2] = b + '0';

    write(1, number, 3);

    return (0);
}