/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:25:31 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/27 14:31:49 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_wordcount(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s || !*s)
		return (0);
	if (!c)
		c = '\n';
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == c)
			i++;
		if ((s[i] >= 33 && s[i] <= 126) && s[i] != c)
			count++;
		while (s[i] >= 33 && s[i] <= 126 && s[i] != c && s[i])
			i++;
	}
	return (count);
}
