/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:24:09 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:24:09 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        write(1, "21474", 5);
        write(1, "83648", 5);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putchar(nb / 10 + '0');
        ft_putchar(nb % 10 + '0');
    }
}

int main(int argc, char const *argv[])
{
    ft_putnbr(42);
    return 0;
}
