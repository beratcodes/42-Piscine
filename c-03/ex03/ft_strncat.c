/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:17:54 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 16:17:54 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    if (nb == 0)
        return (0);

    i = 0;
    while (dest[i] != '\0')
        i++;
    
    j = 0;
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char src[] = "Berat";
    char dest[] = "Sude ";
    unsigned int nb = 4;

    printf("%s", ft_strncat(dest, src, nb));
    return 0;
}
