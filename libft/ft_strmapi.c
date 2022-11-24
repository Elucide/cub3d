/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:55:15 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:59:10 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*out;

	i = 0;
	out = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!out)
		return (NULL);
	while (i < ft_strlen(s))
	{
		out[i] = (f)(i, s[i]);
		i++;
	}
	out[i] = 0;
	return (out);
}
