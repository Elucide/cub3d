/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:24:41 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:48:18 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptdr;
	unsigned char	*ptr;
	size_t			i;

	ptdr = (unsigned char *)s1;
	ptr = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptdr[i] != ptr[i])
			return (ptdr[i] - ptr[i]);
		i++;
	}
	return (0);
}
