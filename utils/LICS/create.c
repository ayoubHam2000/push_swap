/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:28:24 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/29 02:41:03 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LICS.h"

void	*p_int(int nbr)
{
	int	*p;

	p = ft_malloc(sizeof(int));
	*p = nbr;
	return (p);
}
