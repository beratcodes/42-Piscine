/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:23:44 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:23:44 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
