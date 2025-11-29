/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:26 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:26 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);    
    }
    return (1);
}

int main(void)
{
    int number;

    number = ft_str_is_uppercase("MERHABa");

    if(number == 1)
        write(1, "1", 1);
    else
        write(1, "0", 1);
        
    return (0);
}