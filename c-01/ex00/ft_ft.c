#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    int *b;
    char number[2];
    b = &a;

    ft_ft(b);

    number[0] = a / 10 + '0';
    number[1] = a % 10 + '0';

    write(1, number, 2);
    
    return (0);
}