/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:28:23 by jting             #+#    #+#             */
/*   Updated: 2022/05/26 14:30:53 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_data *a)
{
	t_data	*tmp;
	int		i;

	tmp = a;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	sa(t_data *a)
{
	int	tmp;

	if (lst_len(a) < 2)
		return (0);
	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	ft_printf("sa\n");
	return (1);
}

int	sb(t_data *b)
{
	int	tmp;

	if (lst_len(b) < 2)
		return (0);
	tmp = b->data;
	b->data = b->next->data;
	b->next->data = tmp;
	ft_printf("sb\n");
	return (1);
}


int	ss(t_data *a, t_data *b)
{
	if (sa(a) && sb(b))
	{
		ft_printf("ss\n");
		return (1);
	}
	else
		return (0);
}
