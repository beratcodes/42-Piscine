/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:17:59 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 16:17:59 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;

    if(n == 0)
        return (0);
    
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (i == n)
        return (0);
    return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char    s1[] = "Berat";
    char    s2[] = "bude";
    unsigned int n = 3;

    printf("%d", ft_strncmp(s1, s2, n));
    return 0;
}
