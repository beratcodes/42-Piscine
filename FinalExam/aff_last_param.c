/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercakir <bercakir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:47:25 by bercakir          #+#    #+#             */
/*   Updated: 2025/11/27 18:47:25 by bercakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char const **av)
{
    int last;

    last = ac - 1;
    if (ac > 1)
    {
        while(*av[last])
        {
            write(1, av[last]++, 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
