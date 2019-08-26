/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:21:09 by cle-guen          #+#    #+#             */
/*   Updated: 2017/11/08 16:40:19 by cle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
