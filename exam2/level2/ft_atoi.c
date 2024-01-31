#include<stdio.h>
int	ft_atoi(const char *str)
{
	int i = 0;
	int r = 0;
	int sin = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sin *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return(r * sin);
}
int main()
{
	printf("%d", ft_atoi("-124545"));
}
