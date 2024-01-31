#include <unistd.h>
void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char b;
	while(i--)
	{
		b = (octet >> i & 1) + '0';
		write(1, &b, 1);
	}
	write(1, "\n", 1);
}
