/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:12:47 by dankubov          #+#    #+#             */
/*   Updated: 2026/11/14 16:30:49 by dankubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	validate_vector(int v[], int left, int right, int size)
{
	int	i;
	int	view_l;
	int	view_r;
	int	truer;
	int	falser;
	int	visible;

	truer = 1;
	falser = 0;
	i = 0;
	view_l = 0;
	visible = 0;
	while (i < size)
	{
		printf("\ni (%d) < size (%d)\n", i, size);
		if (v[i] > view_l)
		{
			printf("v[%d] (%d) > view_l (%d)\n", i, v[i], view_l);
			view_l = v[i];
			printf("view_l (%d) = v[%d] (%d)\n", view_l, i, v[i]);
			visible++;
		}
		if (visible > left)
		{
			printf("visible (%d) > right (%d)\n", visible, left);
			return (falser);
		}
		i++;
	}
	if (visible != left)
	{
		printf("visible (%d) != left (%d)\n", visible, left);
		return (falser);
	}
	i = size - 1;
	view_r = 0;
	visible = 0;
	while (i >= 0)
	{
		printf("\ni (%d) >= 0\n", i);
		if (v[i] > view_r)
		{
			printf("v[%d] (%d) > view_r (%d)\n", i, v[i], view_r);
			view_r = v[i];
			printf("view_r (%d) = v[%d] (%d)\n", view_r, i, v[i]);
			visible++;
		}
		if (visible > right)
		{
			printf("visible (%d) > right (%d)\n", visible, right);
			return (falser);
		}
		i--;
	}
	if (visible != right)
	{
		printf("visible (%d) != right (%d)\n", visible, right);
		return (falser);
	}
	else
		return (truer);
}

int	main(void)
{
	int	v[] = {3, 4, 1, 2};
	int	ret = validate_vector(v, 2, 2, 4);

	printf("\nret: %d\n", ret);
	return (0);
}
