/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:14 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:14 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    i = 0;

    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}

int main(void)
{
    char dest[50];
    char src[] = "Merhaba"; 
    unsigned int n;

    n = 3;

    ft_strncpy(dest, src, n);

    write(1, dest, n);
    
    return (0);
}