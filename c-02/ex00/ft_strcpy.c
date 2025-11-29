/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:11 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:11 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return (dest);
}

int main(void)
{
    char src[] = "Berat";
    char dest[20];

    ft_strcpy(dest, src);

    int i;

    i = 0;

    while(dest[i] != '\0')
    {
        write(1, &dest[i], 1);
        i++;
    }

    return 0;
}