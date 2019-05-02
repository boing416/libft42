/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 11:54:11 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 09:57:22 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int					i;
	unsigned char		*tmp;

	i = 0;
	tmp = str;
	while (n > 0)
	{
		tmp[i] = c;
		i++;
		n--;
	}
	return (str);
}
