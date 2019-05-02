/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 08:27:36 by mnurkass          #+#    #+#             */
/*   Updated: 2019/05/02 08:42:44 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	if ((tmp = (t_list *)malloc(sizeof(*tmp))))
	{
		if (content)
		{
			tmp->content = malloc(content_size);
			if (!tmp->content)
			{
				free(tmp);
				return (NULL);
			}
			ft_memcpy(tmp->content, content, content_size);
			tmp->content_size = content_size;
		}
		else
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
	}
	else
		return (NULL);
	tmp->next = NULL;
	return (tmp);
}
