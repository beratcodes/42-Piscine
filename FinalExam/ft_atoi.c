/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:47:31 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 18:47:31 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi (char *str)
{
	int	i;
	int sign;
	int result;

	i = 0;
	result = 0;
	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		++i;

	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
		
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int main(void)
{
	printf("%d", ft_atoi("\n\r\f\v\t    ---1234abc567"));
}