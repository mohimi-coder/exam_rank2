#include <string.h>
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int j;
	int i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}
int main()
{
	char *s1 = "ABCDEF4960910a";
	char *s2 = "49";
	printf("%zu\n", strcspn(s1, s2));
}