/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:36:08 by aben-ham          #+#    #+#             */
/*   Updated: 2022/01/10 23:30:32 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <termios.h>

char	getch(void)
{
	char	buf = 0;
	struct termios old = {0};
}

int main()
{
	char	c;
	
	return (0);
}

/*
in B
rotate or swap

A : 12 -> 11 -> 9 -> 8 -> 7 -> 6 -> 5 -> 4 -> 2 -> 1
B : 20 -> 21 -> 15 -> 13 -> 14

== where is the most likley min

*/

// ./push_swap.out `seq 0 4 | sort -R | tr '\n' ' '` > out