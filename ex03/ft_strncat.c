#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);	
}

int main()
{
	char src[] = "hello";
	char dest[] = "sunshine";
	printf("%s\n", ft_strncat(dest, src, 3));
	return 0;
}
