#include "ft_printf.h"

int	form_s(char *s)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	if (ft_strlen(s) >= 2147483647)
		return (ERR);
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
