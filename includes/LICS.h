/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LICS.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:55:47 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/28 20:41:42 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LICS_H
# define LICS_H

# include "linked_list.h"
# include <stdio.h>

void	print_list_nbr(t_list *list);
void	print_lists(t_list *list);
int		*get_arr(int ac, char **av);

int		_int(t_node *x);
t_list	*_list(t_node *x);
void	*p_int(int nbr);
void	*clone_int(void *p);

int		con_del_same_len(t_node *node, void *p);
int		con_del_less_than_len(t_node *node, void *p);
void	del_list_int(void *p);
void	keep_longest(t_list *lists);
t_list	*lis(int *arr, int size);
t_list	*lics(int *arr, int size);

#endif
