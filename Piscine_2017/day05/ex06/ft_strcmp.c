/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:27:10 by cle-guen          #+#    #+#             */
/*   Updated: 2017/07/17 14:37:59 by cle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == s2)
		return (0);
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
