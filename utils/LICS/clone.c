/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:24:29 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/28 20:33:21 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LICS.h"

void	*clone_int(void *p)
{
	int	i;
	int	*new_p;

	new_p = ft_malloc(sizeof(int));
	i = *((int *)p);
	*new_p = i;
	return (new_p);
}
