/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:55:50 by jting             #+#    #+#             */
/*   Updated: 2022/05/25 16:00:39 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
/*
t_data	*fill_lst(char **av)
{
	t_data	*node;
	
	node = create_node(0);
	check_valid(av, node);
	return (node);
}
*/
int	main(int ac, char **av)
{
	t_data	*a;
	t_data	*b;

	if (ac < 2)
	{
		ft_printf("Error, not enough numbers\n");
		return (0);
	}
	a = init_lst(ac, av);
	b = create_node(10);
	ft_printf("list a\n");
	print_lst(a);
	ra(a);
	print_lst(a);
	return (0);
}
