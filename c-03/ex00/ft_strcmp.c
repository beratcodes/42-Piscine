/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:18:02 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 16:18:02 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char    s1[] = "Berat ";
    char    s2[] = "Sude";
    
    printf("%d", ft_strcmp(s1, s2));
    return 0;
}
