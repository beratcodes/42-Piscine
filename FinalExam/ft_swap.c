/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:20:46 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 21:20:46 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_swap(int *a, int *b)
{
    char swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int a;
    int b;
    char numbers[3];

    a = 5;
    b = 9;

    ft_swap(&a, &b);

    numbers[0] = a + '0';
    numbers[1] = ':';
    numbers[2] = b + '0';

    write(1, numbers, 3);

    return (0);
}