#include <strings.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char str[] = "hihellohey";
	char string[] = "hihellohey";
	ft_bzero(str, sizeof(str));
	printf("hihellohey is now: %s\n", str);
	bzero(string, sizeof(string));
	printf("hihellohey is now: %s\n", string);
	return (0);
}
