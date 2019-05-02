/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:52:38 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 13:01:22 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if ((tmp = ft_strnew(ft_strlen(s))))
	{
		ft_strcpy(tmp, s);
		i = -1;
		while (*(tmp + ++i))
			*(tmp + i) = f(*(tmp + i));
		return (tmp);
	}
	else
		return (NULL);
}
