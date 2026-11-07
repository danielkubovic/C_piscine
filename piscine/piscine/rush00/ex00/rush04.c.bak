#include <unistd.h>

int	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "Error! x OR y < 1\n", 18);
		return (1);
	}
	x = x - 2;
	y = y - 2;
	int	x1 = x;
	int	x2 = x;

	write(1, "A", 1);
	while (x != 0)
	{
		write(1, "B", 1);
		x--;
	}
	write(1, "C\n", 2);
	// ------------------- end of first row ------------------

	while (y != 0)
	{
		write(1, "B", 1);
		while(x1 != 0)
		{
			write(1, " ", 1);
			x1--;
		}
		write(1, "B\n", 2);
		y--;
		x1 = x2;
	}
	// -------------------- start of last row --------------------------
	write(1, "C", 1);

	while (x2 != 0)
	{
		write(1, "B", 1);
		x2--;
	}
	write(1, "A\n", 2);
	return (0);
}

int	main(void)
{
	rush(0, 4);
}
