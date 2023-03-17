#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char *d;
	const char *s = src;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

int	main(void)
{
	char *restrict dest;
	char *restrict src;

	dest = malloc(8);
	src = "hihello";
	ft_memcpy(dest, src, 7);
	dest[7] = '\0';
	printf("%s\n", dest);
	free(dest);
	return (0);
}
