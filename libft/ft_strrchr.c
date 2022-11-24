/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:17:57 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:56:10 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*popo;

	popo = (char *)s;
	i = ft_strlen(popo);
	if (!c)
		return (&popo[i]);
	while (i + 1)
	{
		if (popo[i] == (char)c)
			return ((&popo[i]));
		i--;
	}
	return (NULL);
}
