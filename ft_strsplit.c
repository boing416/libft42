/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:56:01 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 10:06:21 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	f;
	size_t	save;
	size_t	i;
	size_t	j;
	char	**str;

	if (!s)
		return (NULL);
	if (!(str = (char **)ft_memalloc((ft_gcw(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	j = 0;
	f = 0;
	save = 0;
	while (s[++i])
	{
		if (f && s[i] == c)
			str[j++] = ft_strsub(s, save, i - save);
		if (!f && s[i] != c)
			save = i;
		f = (s[i] == c) ? 0 : 1;
	}
	if (f)
		str[j] = ft_strsub(s, save, i - save);
	return (str);
}
