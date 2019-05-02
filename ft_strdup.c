/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:24:59 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 14:14:30 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*str2;
	size_t		i;
	size_t		k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	k = 0;
	str2 = (char*)malloc(sizeof(char) * (i + 1));
	if (!str2)
		return (NULL);
	while (k < i)
	{
		str2[k] = src[k];
		k++;
	}
	str2[k] = '\0';
	return (str2);
}
