/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:41:47 by dankubov          #+#    #+#             */
/*   Updated: 2026/11/08 18:36:57 by dankubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	rush(int x, int y)
{
	int		ix;
	int		iy;

	if (x < 0 || y < 0 || x > 211 || y > 21474)
	{
		write(1, "Error!", 6);
	}
	else
	{
		iy = 0;
		while (iy < y)
		{
			ix = 0;
			while (ix < x)
			{
				if (ix == 0 && iy == 0)
					ft_putchar('A');
				else if (ix == 0 && iy == y - 1)
					ft_putchar('C');
				else if (ix == x - 1 && iy == 0)
					ft_putchar('C');
				else if (ix == x - 1 && iy == y - 1)
					ft_putchar('A');
				else if (ix > 0 && ix < x - 1 && iy > 0 && iy < y - 1)
					ft_putchar(' ');
				else
					ft_putchar('B');
				ix++;
			}
			write(1, "\n", 1);
			iy++;
		}
	}
}
