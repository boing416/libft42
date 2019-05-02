/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:57:19 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 15:44:44 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (++x < n)
	{
		if (*(src))
			*(dest++) = *(src++);
		else
			*(dest++) = 0;
	}
	return (ret);
}
