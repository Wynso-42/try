/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allevass <allevass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:32:01 by allevass          #+#    #+#             */
/*   Updated: 2023/08/28 16:32:32 by allevass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(get_malloc_size(size, strs, sep) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = 0;
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[ft_strlen(res)] = 0;
	return (res);
}

/*#include <stdio.h>

int main(){
    char    *tab[] = {"salut","tu","vas","bien","?"};
    char *r = ft_strjoin(5, tab, " ");
    printf("%s",r);
}*/
