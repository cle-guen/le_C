/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:24:26 by cle-guen          #+#    #+#             */
/*   Updated: 2017/07/18 14:08:57 by cle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int gg;

	i = 0;
	gg = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (gg < nb)
	{
		dest[i] = src[gg];
		i++;
		gg++;
	}
	dest[i] = '\0';
	return (dest);
}
