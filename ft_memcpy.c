/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:08:28 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 09:32:23 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = str1;
	s2 = str2;
	while (n > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	return (str1);
}
