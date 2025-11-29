/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:52 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:52 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	
}

int main(void)
{
	ft_putstr("Merhaba");
	return (0);
}