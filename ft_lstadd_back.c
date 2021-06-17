/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:31:18 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/10 14:16:43 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *item)
{
	t_list	*sup;

	if (!item)
		return ;
	if (!*lst)
	{
		*lst = item;
		return ;
	}
	sup = ft_lstlast(*lst);
	sup->next = item;
}
