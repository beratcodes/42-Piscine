/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:59 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:59 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int   ft_strlen(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}

int main(void)
{
    int len;
    char c;

    len = ft_strlen("Berat");
    c = len + '0';
    write(1, &c, 1);
    return (0);
}