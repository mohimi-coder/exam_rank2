void	ft_swap(int *a, int *b)
{
	int *tmp;
	*a = *b;
	*tmp = *a;
	*b = *tmp;
}
