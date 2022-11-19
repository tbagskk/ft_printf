#include "ft_printf.h"

int	ft_p(unsigned long int a)
{
	int i;
	char tab[16];

	i = 0;
	if (a == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (a)
	{
		tab[i] = "0123456789abcdef"[a % 16];
		a = a / 16;
		i++;
	}
	write(1, "0x", 2);
	ft_putstr(tab);
	return(0);
}