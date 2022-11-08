#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		bytes;
	va_list	ap;

	va_start(ap, str);
	bytes = handling_data(ap, str);
	va_end(ap);
	return (bytes);
}
