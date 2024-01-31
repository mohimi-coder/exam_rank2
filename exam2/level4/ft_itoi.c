#include <stdio.h>
int ft_strlen(const char *str)
{
	int i =0;
	while(str[i])
		i++;
	return(i);
}
char    *ft_strdup(const char *src)
{
    char    *dst;
	int i = 0;
    int len = ft_strlen(src);
    dst = malloc(sizeof(char) * (len + 1));
    if (dst == NULL)
        return (NULL);
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
char	*ft_itoa(int n)
{
	char	arr[12];
	long b = n;
	int	i;
	int	divisor = 1000000000;
	if (n == 0)
		return (ft_strdup("0"));
	if (b < 0)
		b *= -1;
	arr[0] = '0';
	i = 0;
	while (++i <= 10)
	{
		arr[i] = b / divisor + 48;
		b %= divisor;
		divisor /= 10;
	}
	i = 0;
	while (arr[i] == '0')
		i++;
	if (n < 0)
		arr[--i] = '-';
	return (arr[11] = '\0', ft_strdup(&arr[i]));
}
int main()
{
	int ab = 47483654;
	printf("%s", ft_itoa(ab));
}
