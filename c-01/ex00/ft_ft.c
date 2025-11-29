/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:40 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:40 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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