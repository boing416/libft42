/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:31:03 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/01 14:54:02 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	check1;
	size_t	check2;

	if (!s)
		return (NULL);
	check1 = 0;
	while (s[check1] == ' ' || s[check1] == '\n' || s[check1] == '\t')
		check1++;
	check2 = ft_strlen(s);
	while (s[check2 - 1] == ' '
		|| s[check2 - 1] == '\n' || s[check2 - 1] == '\t')
		check2--;
	if (check2 < check1)
		check2 = check1;
	return (ft_strsub(s, check1, check2 - check1));
}
