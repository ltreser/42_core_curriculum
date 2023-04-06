#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

int	main(void)
{
	char *dest;
	char *src;

	dest = malloc(8);
	src = "hihello";
	ft_memcpy(dest, src, 8);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
