/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:45:22 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 21:45:22 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i;
    int last;
    char temp;

    i = 0;

    while (str[i])
        i++;
    
    last = i - 1;
    i = 0;
    while (last > i)
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;

        i++;
        last--;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "Berat";

    printf("%s", ft_strrev(str));

    return (0);
}