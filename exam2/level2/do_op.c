#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 4)
	{
		int num1 = atoi(av[1]);
		int num2 = atoi(av[3]);
		if(av[2][0] == '+')
			printf("%d", (num1 + num2));
		else if(av[2][0] == '-')
			printf("%d", (num1 - num2));
		else if(av[2][0] == '*')
			printf("%d", (num1 * num2));
		else if(av[2][0] == '/')
			printf("%d", (num1 / num2));
		else if (av[2][0] == '%')
			printf("%d", (num1 % num2));
	}
	write(1, "\n", 1);
	return(0);
}