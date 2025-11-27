/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:08:03 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 22:08:03 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while (av[1][i])
        {
            ft_putchar(av[1][i]);
            i++;
        }
    }
    else 
        ft_putchar('\n');
    return 0;
}
