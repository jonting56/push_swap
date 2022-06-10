/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:11:02 by jting             #+#    #+#             */
/*   Updated: 2022/06/10 10:39:23 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_data *a, t_data *b)
{
	t_data	*tmp_a;
	t_data	*tmp_b;

	ft_printf("%c			%c\n", a->data, b->data);
	tmp_a = a->next;
	tmp_b = b->next;
	while (tmp_a)
	{
		if (tmp_b)
		{
			ft_printf("%d			%d\n", tmp_a->data, tmp_b->data);
			tmp_a = tmp_a->next;
			tmp_b = tmp_b->next;
		}
		else
		{
			ft_printf("%d			\n", tmp_a->data);
			tmp_a = tmp_a->next;
		}
	}
}

void	print_index(t_data *a)
{
	t_data	*tmp;

	tmp = a->next;
	while (tmp)
	{
		ft_printf("%d\n", tmp->index);
		tmp = tmp->next;
	}
}
