/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:28:18 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/13 18:09:31 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	out;

	if (fd)
	{
		out = 0;
		if (nb < 0)
		{
			out = nb * -1;
			ft_putchar_fd('-', fd);
		}
		else
			out = nb;
		if (out <= 9)
			ft_putchar_fd(out + '0', fd);
		else
		{
			ft_putnbr_fd(out / 10, fd);
			ft_putnbr_fd(out % 10, fd);
		}
	}
}
