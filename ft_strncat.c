/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:34:16 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 15:01:35 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, char *restrict s2, size_t n)
{
	char	*new_s1;
	size_t	i;

	new_s1 = s1;
	while (*s1)
		s1++;
	i = 0;
	while (*s2 && i++ < n)
		*s1++ = *s2++;
	*s1 = '\0';
	return (new_s1);
}
