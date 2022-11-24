/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:22:04 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:55:37 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptdr;

	ptr = (unsigned char *)s1;
	ptdr = (unsigned char *)s2;
	i = 0;
	if (n == 0 || (!ptr[0] && !ptdr[0]))
		return (0);
	while (i < n && (ptr[i] || ptdr[i]))
	{
		if (ptr[i] != ptdr[i])
			return ((int)(ptr[i] - ptdr[i]));
		i++;
	}
	return (0);
}
