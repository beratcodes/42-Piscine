/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:47:34 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 18:47:34 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;

    while ( (s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[2]);    
}

#include <stdio.h>

int main()
{
    char s1[] = "Berat";
    char s2[] = "Cakir";

    printf("%d", ft_strcmp(s1, s2));
    return 0;
}
