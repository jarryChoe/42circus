#include "ft_printf.h"

static size_t	ft_len(unsigned int n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*ft_uns_itoa(unsigned int n)
{
	char	*ret;
	size_t	len;

	len = ft_len(n);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	if (n == 0)
		ret[0] = '0';
	ret[len--] = '\0';
	while (n > 0)
	{
		ret[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (ret);
}

int	form_u(unsigned int n)
{
	char	*nb;
	int		len;

	nb = ft_uns_itoa(n);
	if (!nb)
		return (ERR);
	ft_putstr_fd(nb, 1);
	len = ft_strlen(nb);
	free(nb);
	return (len);
}
