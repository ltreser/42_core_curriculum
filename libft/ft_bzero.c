#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		((unsigned char *)s)[i] = 0;
	}
}

int	main(void)
{
	char str[] = "hihellohey";
	ft_bzero(str, sizeof(str));
	printf("hihellohey is now: %s\n", str);
	return (0);
}
