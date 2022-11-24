/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:15:39 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:52:58 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*popo;

	popo = (char *)s;
	i = 0;
	while (popo[i] != (char) c && popo[i])
		i++;
	if (popo[i] == (char)c)
		return (&popo[i]);
	return (NULL);
}
