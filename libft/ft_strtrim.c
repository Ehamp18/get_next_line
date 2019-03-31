/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:16:36 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/29 12:58:16 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		lensi(const char *s)
{
	size_t			i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char			*ncpy(char *dst, const char *src, size_t len)
{
	size_t			i;

	i = 0;
	ft_memset((void*)dst, 0, len);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char				*ft_strtrim(char const *s)
{
	size_t			sta;
	size_t			end;
	char			*string;

	if (!s)
		return (NULL);
	sta = 0;
	end = lensi(s) - 1;
	while (s[sta] && (s[sta] == ' ' || s[sta] == '\t' || s[sta] == '\n'))
		sta++;
	while (end && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	if (end <= sta)
		return (ft_strnew(0));
	if (!(string = ft_strnew(end - sta + 1)))
		return (NULL);
	ncpy(string, s + sta, end - sta + 1);
	return (string);
}
