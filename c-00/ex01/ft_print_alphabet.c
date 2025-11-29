/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:23:28 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:23:28 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_print_alphabet(void)
{
    char alphabet;

    alphabet = 'a';

    while(alphabet <= 'z')
    {
        ft_putchar(alphabet);
        alphabet++;
    }
}