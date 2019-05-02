/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:56:06 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 13:16:41 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	int				j;

	j = 0;
	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (str[j] == c1)
			return (str + j);
		n--;
		j++;
	}
	return (0);
}
