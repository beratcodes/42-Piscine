/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:49 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:49 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    char array[3];

    a = 5;
    b = 3;

    ft_div_mod(a, b, &div, &mod);

    array[0] = div + '0';
    array[1] = ' ';
    array[2] = mod + '0';

    write(1, array, 3);

    return (0);

}