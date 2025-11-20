/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:24:27 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 16:24:27 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
        return (0);
    
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);    
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char    str[] = "Merhaba Sude";
    char    to_find[] = "Sude";

    printf("%s", ft_strstr(str, to_find));
    return 0;
}
