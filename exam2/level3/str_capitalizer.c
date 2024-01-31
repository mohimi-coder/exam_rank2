/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:10:30 by mohimi            #+#    #+#             */
/*   Updated: 2024/01/31 19:09:32 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// int to_uper(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return(c);
// }
// int to_lower(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		c += 32;
// 	return(c);
// }
// void ft_captaliz(char *str)
// {
// 	int i = 0;
// 	while(str[i])
// 	{
// 		if((str[i] != 32  || str[i] != 9)&& i == 0)
// 			str[i] = to_uper(str[i]);
// 		if(str[i] != 32 || str[i] != 9)
// 		{
// 			if(str[i] == 32 || str[i] == 9)
// 				str[i + 1] = to_uper(str[i+1]);
// 			else
// 				str[i + 1] = to_lower(str[i+1]);
// 		}
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }
// int main(int ac, char **av)
// {
// 	int i;
// 	if(ac > 1)
// 	{
// 		i = 1;
// 		while(i < ac)
// 		{
// 			ft_captaliz(av[i]);
// 			i++;
// 			if(i != ac)
// 				write(1, "\n", 1);
// 		}
// 	}
// 	write(1, "\n", 1);
// }
#include <unistd.h>
int ft_to_uper(char c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return(c);
}
int ft_to_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return(c);
}
void ft_str_capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] != 32 || str[i] != 9) //"a FiRSt LiTTlE TESt" to  //A First Little Test
		{
			if(str[i] != 32 || str[i] != 9 && i == 0)
				str[i] = ft_to_uper(str[i]);
			if(str[i - 1] == 32 || str[i - 1] == 9 || str[i - 1] == '\0')
				str[i] = ft_to_uper(str[i]);
			else
				str[i] = ft_to_lower(str[i]);
		}
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i;
	if(ac > 1)
	{
		i = 1;
		while(i < ac)
		{
			ft_str_capitalizer(av[i]);
			i++;
			if(ac != i)
				write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
}%