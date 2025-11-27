/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:04:23 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 19:04:23 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    return (s1);
}

#include <stdio.h>

int main()
{
    char s1[] = "Berat";
    char s2[] = "Sude";

    printf("Before: %s\n", s1);
    ft_strcpy(s1, s2);
    printf("After: %s\n", s1);
    
}