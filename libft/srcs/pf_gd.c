/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_gd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:54:23 by cle-guen          #+#    #+#             */
/*   Updated: 2018/05/30 14:10:26 by cle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_gd_mod(t_flags *flags, va_list al, intmax_t *n)
{
	if (flags->point == 1)
		flags->zero = 0;
	*n = va_arg(al, long);
}

static void	pf_gd_bis(t_flags *flags, t_pos *pos, intmax_t *n)
{
	if (flags->space == 1 && *n >= 0 && flags->plus == 0)
		pf_put_buff(pos, " ", 1);
	if (flags->zero == 0)
		pf_width(flags, pos, 0);
	if (*n < 0)
		pf_put_buff(pos, "-", 1);
	if (flags->plus == 1 && *n >= 0)
		pf_put_buff(pos, "+", 1);
	if (flags->zero == 1)
		pf_width(flags, pos, 0);
	pf_precision(flags, pos, 1);
}

int			pf_gd(t_flags *flags, va_list al, t_pos *pos)
{
	char		*str;
	int			len;
	intmax_t	n;
	uintmax_t	tmp;
	int			start_pre;

	start_pre = flags->pre;
	pf_gd_mod(flags, al, &n);
	tmp = n < 0 ? -n : n;
	str = pf_itoa_base(flags, tmp, "0123456789", 10);
	len = pf_strlen(str);
	flags->pre -= len;
	flags->pre *= (flags->pre >= 0);
	flags->width -= flags->pre + len +
		(flags->space || (flags->plus && n >= 0)) -
		(n == 0 && flags->point == 1 && flags->pre == 0) + (n < 0);
	pf_gd_bis(flags, pos, &n);
	if (!(n == 0 && !start_pre && flags->point == 1))
		pf_put_buff(pos, str, len);
	if (flags->minus == 1 && flags->zero == 1)
		flags->zero = 0;
	pf_width(flags, pos, 1);
	free(str);
	return (1);
}
