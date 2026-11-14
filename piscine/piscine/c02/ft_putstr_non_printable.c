#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] != 127)
			write(1, &str[i], 1);
		else
			// do the hex thing
		i++;
	}
}

int	main(void)
{
	char	*str;

	str = "Hello, this is:\na string.";
	ft_putstr_non_printable(str);
	return (0);
}
