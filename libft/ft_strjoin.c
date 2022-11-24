/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:06:16 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/06 14:53:57 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	out = malloc(sizeof(char) * (j + i + 1));
	if (!out)
		return (NULL);
	j = 0;
	i = -1;
	while (s1[++i])
		out[i] = s1[i];
	while (s2[j])
	{
		out[i] = s2[j];
		i++;
		j++;
	}
	out[i] = 0;
	return (out);
}
