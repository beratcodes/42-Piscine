#include <unistd.h>

void ft_3num(char a, char b, char c)                               /*0-9 arasında olan sayıların sıralı artan şeklinde kombinasyonlarının bulunması*/
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);

    if('a' != '7' && 'b' != '8' && 'c' != 9)
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb(void)
{
    char d, e, f;

    d = '0';

    while(d <= '7')
    {
        e = d + 1;
        while (e <= '8')
        {
            f = e + 1;
            while (f <= '9')
            {
                ft_3num(d, e, f);
                f++;
            }
            e++;
        }
        d++;
    }
}