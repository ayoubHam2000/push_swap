/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:35:32 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/09 07:39:41 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack *s)
{
	int	tmp;

	if (s->size < 2)
		return ;
	tmp = s->s[s->size - 1];
	s->s[s->size - 1] = s->s[s->size - 2];
	s->s[s->size - 2] = tmp;
	if (s->minPos == s->size - 1)
		s->minPos--;
	else if (s->minPos == s->size - 2)
		s->minPos++;
}

void	ft_sa(t_stack *stack)
{
	ft_swap(stack);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack *stack)
{
	ft_swap(stack);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack *sa, t_stack *sb)
{
	ft_swap(sa);
	ft_swap(sb);
	write(1, "ss\n", 1);
}

void	g_swap(t_stack *s)
{
	if (s->tag == SA)
		ft_sa(s);
	else if (s->tag == SB)
		ft_sb(s);
}
