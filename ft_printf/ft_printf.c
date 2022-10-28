#include "ft_printf.h"

int	handling_data(va_list ap, char *str)
{
	size_t	byte;
	size_t	i;
	va_list	list;

	byte = 0;
	i = 0;
	while (str[i])
	{
		if (str[i]
	}

	return (byte);
}

int	ft_printf(const char *str, ...)
{
	int		byte;
	va_list	ap;

	va_start(ap, str);
	byte = handling_data(ap, str);
	va_end(ap);
	return (0);
}
