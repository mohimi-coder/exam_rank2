#include <stdio.h>
int		check_char_in_str(char *str,char c , int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		chekc_base(char *str, int base)
{
	char	*s1 = "0123456789abcdef";
	char	*s2 = "0123456789ABCDEF";
	int		i;

	if (base < 2 || base > 16)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!check_char_in_str(s1, str[i], base) && !check_char_in_str(s2, str[i], base))
			return (0);
		i++;
	}
	return (1);
}
int len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_pow(int base, int os)
{
	int		i = 1;
	int		r = base;
	if (os == 1)
		return (r);
	if (os == 0)
		return (1);
	while (i < os)
	{
		r *= base;
		i++;
	}
	return (r);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		r = 0;
	int sin = 1;
	int i = 0;
	if (chekc_base( (char *)str, str_base))
	{
		i = 0;
		int	 os = len ((char *)str) - 1;
		int	data;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'f' )
				data = str[i] - 'a' + 10;
			else if(str[i] >= 'A' && str[i] <= 'F')
				data = str[i] - 'A' + 10;
			else
				data = str[i] - '0';
			r += (ft_pow(str_base,os))*data;
			i++;
			os--;
		}
		return (r);
	}
	else
		return (-1);
}

int main()
{
	printf("%d\n", ft_atoi_base("-12Ab", 16));
}