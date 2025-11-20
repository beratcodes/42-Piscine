/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:30:16 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 16:30:16 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

#include <stdio.h>

int main(void)
{
    int number;
    char    str[] = "Sude";

    number = ft_strlen(str);
    printf("%d", number);

    return 0;
}
