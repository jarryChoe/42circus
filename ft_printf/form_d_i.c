#include "ft_printf.h"

int	form_d_i(int n)
{
	char	*nb;
	int		len;

	nb = ft_itoa(n);
	if (!nb)
		return (ERR);
	ft_putstr_fd(nb, 1);
	len = ft_strlen(nb);
	free(nb);
	return (len);
}
