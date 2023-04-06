#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    restrict char *temp;

    temp = src;
    while (n--)
        dest++ = temp++;
    return (dest);
}

int main(void)
{
    char *dest;
    char *src = "hihello";

    dest = malloc(8);
    ft_memmove(dest, src, 7);
    src[7] = '\0';
    printf("%s\n", dest);
    free(dest);
    return (0);
}

