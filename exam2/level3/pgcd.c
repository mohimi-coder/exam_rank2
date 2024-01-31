#include <stdio.h>
#include <stdlib.h>
unsigned int gcd(unsigned int x, unsigned int y)
{
	unsigned int temp;
	while(y != 0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	return(x);
}
int main(int ac, char **av)
{
	if(ac == 3)
		printf("%d", gcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
}