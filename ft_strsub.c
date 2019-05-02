/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:48 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 10:06:51 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (s)
	{
		if ((tmp = ft_strnew(len)))
		{
			i = 0;
			while (i < len)
			{
				tmp[i] = s[start];
				start++;
				i++;
			}
			return (tmp);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
