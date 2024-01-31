/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:22:02 by mohimi            #+#    #+#             */
/*   Updated: 2024/01/31 14:35:54 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
size_t count(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		while(str[i] == '\t' || str[i] == 32 || str[i] == '\n')
			i++;
		if(str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != 32)
            count++;
        while(str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != 32)
            i++;
    }
    return(count);
}
char **ft_split(char *str)
{
	int i = 0;
	size_t j = 0;
	int k = 0;
	size_t c = count(str);
	char **arr;
	arr = (char **)malloc((c + 1)* sizeof(char *));
	if(!arr)
		return(NULL);
	while(j < c)
	{
		k = 0;
		while(str[i] == '\t' || str[i] == 32 || str[i] == '\n')
			i++;
		int wl = 0;
		while(str[i + wl] && str[i + wl] != ' ' && str[i + wl] != '\t' && str[i + wl] != '\n')
			wl++;
		arr[j] = (char *)malloc((wl + 1) * sizeof(char));
		if (!arr[j])
			return NULL;
		while(wl--)
		{
			arr[j][k] = str[i];
			i++;
			k++;
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j]= NULL;
	return(arr);
}
#include <stdio.h>
int main()
{
    char *str = "                hello             hi                   world                    ";
    char **arr = ft_split(str);
    printf("%s\n", arr[0]);
    printf("%s\n", arr[1]);
    printf("%s\n", arr[2]);
    for (int i = 0; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
