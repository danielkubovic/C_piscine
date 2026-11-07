/*
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
	write(1, nbr, 2);
}

int	main(void)
{
	int nbr;
	ft_ft(&nbr);
}
*/

int nbr = 42;
int *pNBR = &nbr;
