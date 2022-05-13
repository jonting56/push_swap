/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:30:01 by jting             #+#    #+#             */
/*   Updated: 2022/05/13 15:13:02 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*create_node(int n)
{
	t_data	*node;

	node = (t_data *)malloc(sizeof(t_data));
	node->data = n;
	node->next = NULL;
	return (node);
}

t_data	*multi_str(int ac, char **av)
{
	t_data	*a;
	t_data	*tmp;
	int		i;

	a = create_node(0);
	tmp = a;
	i = 1;
	while (i < ac)
	{
		tmp->data = ft_atoi(av[i]);
		tmp->next = create_node(0);
		tmp = tmp->next;
		printf("%d", tmp->data);
		i++;
	}
	return (a);
}
/*
int	single_str(char *s, t_data *a)
{
	char	**nums;

	nums = ft_split(s, ' ');
	if (!multi_str())
	{
		ft_printf("Error");
		return (0);
	}
	return (1);
}
*/