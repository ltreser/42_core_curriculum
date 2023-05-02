#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	unsigned char cc;

	*src = s;
	cc = c;

	while (n--)
	{
		if (*src == cc)
			return (src);
		src++;
	}
	return (0);
}
