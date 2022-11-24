/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:16:30 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:49:02 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptdr;
	unsigned char	ptr;

	ptdr = (unsigned char *)s;
	ptr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptdr[i] == ptr)
			return (ptdr + i);
		i++;
	}
	return (NULL);
}
