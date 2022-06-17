/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:55:50 by jting             #+#    #+#             */
/*   Updated: 2022/06/17 13:32:19 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_data	*a;
	t_data	*b;

	if (ac < 2)
		return (ft_printf("Error, not enough numbers\n"));
	if ((ac == 2 && !check_valid(av[1], ac)) || !check_args(ac, av))
		return (ft_printf("Error\n"));
	a = init_lst(ac, av);
	b = create_node('b');
	normalise(a);
	if (!no_dupes(a))
		return (ft_printf("Error\n"));
	if (correct_order(a, b))
		return (0);
	if (lst_len(a) == 4)
		three_sort(a);
	else if (lst_len(a) <= 6)
		five_sort(a, b);
	else if (lst_len(a) >= 7)
		radix_sort(a, b);
}
