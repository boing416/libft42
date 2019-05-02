/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:42:01 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 10:00:02 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		h1;
	size_t		h2;
	size_t		n1;
	size_t		n2;

	if (*to_find == '\0')
		return ((char *)str);
	h1 = 0;
	n1 = 0;
	while (*(str + h1) && h1 < n)
	{
		h2 = h1;
		n2 = n1;
		while (*(to_find + n2) && *(str + h2) == *(to_find + n2) && h1 + n2 < n)
		{
			h2++;
			n2++;
		}
		if (*(to_find + n2) == '\0')
			return ((char *)(str + h1));
		h1++;
	}
	return (NULL);
}
