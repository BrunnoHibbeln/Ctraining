#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i + 1);
}

char *ft_strdup(char *src)
{
	char *str;
	char *start;
	int i;

	i = 0;
	if (!(*src))
		return (src = malloc(1));
	str = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!str)
		return (NULL);
	start = str;
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (start);
}

int	main(void)
{
	char str[] = "aaahh";
	char *src = ft_strdup(str);
	
	printf("%s", src);
}
