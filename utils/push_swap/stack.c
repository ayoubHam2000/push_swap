/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:35:25 by aben-ham          #+#    #+#             */
/*   Updated: 2022/02/03 14:48:40 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*init_stack(t_stack *s, int max, char **values, char tag)
{
	int	i;

	s->s = ft_malloc(sizeof(int) * max);
	s->size = 0;
	s->tag = tag;
	i = 0;
	while (i < max && values)
	{
		if (int_check(values[i]))
			s->s[max - i - 1] = ft_atoi(values[i]);
		else
			ft_error();
		i++;
		s->size++;
	}
	if (!dup_check(s))
		ft_error();
	return (s);
}

void	*init_util(void)
{
	t_util	*util;

	util = ft_malloc(sizeof(t_util));
	util->sm_size = 0;
	util->moves = 0;
	util->affect = 0;
	util->checker = 0;
	return (util);
}

void	init_push(t_stack *sa, t_stack *sb, int ac, char **av)
{
	t_util	*util;

	av++;
	init_stack(sa, ac - 1, av, SA);
	init_stack(sb, ac - 1, NULL, SB);
	util = init_util();
	sa->util = util;
	sb->util = util;
}
