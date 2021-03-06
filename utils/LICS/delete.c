/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:29:14 by aben-ham          #+#    #+#             */
/*   Updated: 2022/02/13 17:03:47 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LICS.h"

int	con_del_same_len(t_node *node, void *p)
{
	long	len;

	len = (*(int *)p) + 1;
	if (l_len(_list(node)) == len)
		return (1);
	return (0);
}

int	con_del_less_than_len(t_node *node, void *p)
{
	if (_list(node)->len == _list((t_node *)p)->len)
		return (0);
	return (1);
}

void	del_list_int(void *p)
{
	l_del_all((t_list *)p, NULL);
	free(p);
}

int	con_not_head(t_node *node, void *p)
{
	t_list	*list;

	list = p;
	if (node == list->head)
		return (0);
	return (1);
}
