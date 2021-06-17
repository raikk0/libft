/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 23:26:50 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/16 21:12:51 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_sup;
	t_list	*elem_tmp;
	t_list	*begin;

	if (!lst)
		return (0);
	elem_tmp = lst;
	begin = ft_lstnew(f(elem_tmp->content));
	elem_tmp = elem_tmp->next;
	while (elem_tmp)
	{
		lst_sup = ft_lstnew(f(elem_tmp->content));
		if (!lst_sup)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, lst_sup);
		elem_tmp = elem_tmp->next;
	}
	return (begin);
}
