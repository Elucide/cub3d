/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:33:17 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/08 16:22:14 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned long	j;
	char			*out;
	int				size;

	j = 0;
	i = start;
	if (len <= ft_strlen(s) - (int)start)
		size = len;
	else
		size = ft_strlen(s) - (size_t)start;
	if ((size_t)start >= ft_strlen(s))
		size = 0;
	out = malloc(sizeof(char) * (size + 1));
	if (!out)
		return (NULL);
	while (s[i] && j < (unsigned long)size)
	{
		out[j] = s[i];
		i++;
		j++;
	}
	out[j] = 0;
	return (out);
}
