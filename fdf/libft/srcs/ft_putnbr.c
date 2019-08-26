/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:00:46 by cle-guen          #+#    #+#             */
/*   Updated: 2017/11/29 17:27:43 by cle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	pwr;
	int	tmp;

	tmp = n;
	if ((pwr = n < 0 ? -1 : 1) == -1)
		ft_putchar('-');
	while (tmp /= 10)
		pwr *= 10;
	while (pwr)
	{
		ft_putchar((n / pwr) + '0');
		n -= (n / pwr) * pwr;
		pwr /= 10;
	}
}
