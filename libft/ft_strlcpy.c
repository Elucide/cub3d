/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:33:37 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/05 20:51:12 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen((char *)src));
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		if (i <= (size_t)ft_strlen((char *)src))
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
	}
	dst[i] = 0;
	return (ft_strlen((char *)src));
}
