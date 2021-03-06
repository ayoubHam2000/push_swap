/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:47:19 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/28 22:55:02 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

long	l_len(t_list *list)
{
	if (!list || !list->head)
		return (0);
	return (list->len);
}
