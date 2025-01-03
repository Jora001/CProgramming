/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:00:13 by zhovsepy          #+#    #+#             */
/*   Updated: 2024/12/05 11:51:11 by zhovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_get_number(int i1, int i2, int i[])
{
	i[0] = i1 / 10;
	i[1] = i1 % 10;
	i[2] = i2 / 10;
	i[3] = i2 % 10;
}

void	ft_putchar_multiple(int i1, int i2)
{
	int	i[4];

	ft_get_number(i1, i2, i);
	ft_putchar(i[0] + '0');
	ft_putchar(i[1] + '0');
	ft_putchar(' ');
	ft_putchar(i[2] + '0');
	ft_putchar(i[3] + '0');
	if (i1 != 98 || i2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_putchar_multiple(i1, i2);
			i2++;
		}
		i1++;
	}
}
