/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:17:21 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:56:30 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_char(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	j = ft_strlen((char *)s1) - 1;
	i = 0;
	count = 0;
	while (is_charset(s1[i], set) && s1[i])
		i++;
	while (is_charset(s1[j], set) && j > i)
		j--;
	while (i <= j)
	{
		i++;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
	j = 0;
	out = malloc(sizeof(char) * (count_char(s1, set) + 1));
	if (!out)
		return (NULL);
	while (is_charset(s1[i], set) && s1[i])
		i++;
	while (j < count_char(s1, set))
	{
		out[j] = s1[i];
		i++;
		j++;
	}
	out[j] = 0;
	return (out);
}
