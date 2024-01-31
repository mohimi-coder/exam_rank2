#include <stdio.h>
#include <string.h>
#include <unistd.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;
	if(!s1 || !s2)
		return NULL;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return (char *)&s1[i];
			j++;
		}
		i++;
	}
	return 0;
}
int main()
{
	const char str1[] = "abcde2fghi3jk4l";
   	const char str2[] = "abcd";
	printf("%s", ft_strpbrk(str1, str2));
}
