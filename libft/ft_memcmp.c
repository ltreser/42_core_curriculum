#include <string.h>

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*s1 !== *s2)
			return (*s2 - *s1);
	}
	return (0);
}
