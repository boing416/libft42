/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:56:13 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 10:05:45 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_gcw(char const *str, char c)
{
	size_t	count;
	int		inside_a_word;

	inside_a_word = 0;
	count = 0;
	while (*str)
	{
		if (!inside_a_word && *str != c)
			count++;
		inside_a_word = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}
