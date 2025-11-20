#include <unistd.h>

void ft_is_negative(int n)
{
    char pos;
    char neg;

    pos = 'P';
    neg = 'N';

    if(n >= 0)
    {
        write(1, &pos, 1);
    }
    else
    {
        write(1, &neg, 1);
    }
}

/* Girilen sayıya göre sayının pozitif olup olmadığını buradan test ediyorum.*/