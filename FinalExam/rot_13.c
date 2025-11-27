/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:01:40 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 21:01:40 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int rot_13(char c)
{
    if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
        c -= 13;
    else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
        c += 13;
    return (c);  
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        while (*av[1])
        {
            ft_putchar(rot_13(*av[1]++));
        }
        ft_putchar('\n');
    }
    return 0;
}
