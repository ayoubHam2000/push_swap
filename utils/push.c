/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:35:17 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/10 12:16:08 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack *sa, t_stack *sb)
{
	if (sb->size == 0)
		return ;
	sa->s[sa->size] = sb->s[sb->size - 1];
	if (sa->tag == SB && sa->minPos != -1)
		if (sa->s[sa->minPos] > sb->s[sb->size - 1])
			sa->minPos = sa->size;
	sa->size++;
	sb->size--;
}

void	ft_pa(t_stack *sa, t_stack *sb)
{
	ft_push(sa, sb);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack *sa, t_stack *sb)
{
	ft_push(sb, sa);
	write(1, "pb\n", 3);
}

void	g_push(t_stack *sa, t_stack *sb)
{
	if (sa->tag == SA)
		ft_pa(sa, sb);
	else if (sa->tag == SB)
		ft_pb(sa, sb);
}
