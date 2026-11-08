/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:45:15 by dankubov          #+#    #+#             */
/*   Updated: 2026/11/08 16:46:32 by dankubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(int x, int y, int ix, int iy)
{
	if (ix == 0 && iy == 0)
		return ('A');
	else if (ix == 0 && iy == y - 1)
		return ('C');
	else if (ix == x - 1 && iy == 0)
		return ('C');
	else if (ix == x - 1 && iy == y - 1)
		return ('A');
	else if (ix > 0 && ix < x - 1 && iy > 0 && iy < y - 1)
		return (' ');
	else
		return ('B');
}
