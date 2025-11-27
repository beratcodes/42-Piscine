/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:49:00 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 22:49:00 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);    
}

int main(int ac, char **av)
{
    int len;

    if (ac == 2)
    {
        len = ft_strlen(av[1]);
        while (len--)
            write(1, &av[1][len], 1);
    }
    ft_putchar('\n');

    return (0);
}