/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:41:47 by dankubov          #+#    #+#             */
/*   Updated: 2026/11/08 17:06:08 by dankubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_putchar(int x, int y, int ix, int iy);

void	rush(int x, int y)
{
	int		ix;
	int		iy;
	char	c;

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
				c = ft_putchar(x, y, ix, iy);
				write(1, &c, 1);
				ix++;
			}
			write(1, "\n", 1);
			iy++;
		}
	}
}
