#include <unistd.h>

int	ft_putchar(int x, int y, int ix, int iy)
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

void	rush(int x, int y)
{
	int	ix;
	int	iy;
	char	c;

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

int	main(void)
{
	rush(1, 5);
	return (0);
}
