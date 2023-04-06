#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		((unsigned char*) s)[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char str[] = "blablabla";
	char c[] = "blabla";
	printf("str before ft_memset: %s\n", str);
	ft_memset(str, 'b', 3);
	printf("str after ft_memset: %s\n", str);
	printf("c before memset: %s\n", c);
	memset(c, 'a', 6);
	printf("c after memset: %s\n", c);
	return (0);
}
