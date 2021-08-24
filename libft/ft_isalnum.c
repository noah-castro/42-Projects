#include "libft.h"

int	ft_isalnum(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
}
