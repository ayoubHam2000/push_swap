/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:47:19 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/24 20:47:19 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

size_t	l_len(t_list *list)
{
	if (!list->head)
		return (0);
	return (list->len);
}