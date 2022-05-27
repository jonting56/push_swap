/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:30:01 by jting             #+#    #+#             */
/*   Updated: 2022/05/26 11:08:49 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*create_node(long int n)
{
	t_data	*node;

	node = (t_data *)malloc(sizeof(t_data));
	node->index = 0;
	node->data = n;
	node->next = NULL;
	return (node);
}

int	multi_str(int ac, char **av, t_data *a)
{
	t_data	*tmp;
	int		i;

	tmp = a;
	i = 2;
	a->data = push_atoi(av[1]);
	while (i < ac)
	{
		tmp->next = create_node(push_atoi(av[i]));
		tmp = tmp->next;
		i++;
	}
	return (1);
}

t_data	*single_str(char *s, t_data *a, int ac)
{
	char	**nums;
	int		i;

	i = 1;
	nums = ft_split(s, ' ');
	while (nums[i])
	{
	//	if (!check_valid(nums[i]))
	//		return (0);
		i++;
	}
	multi_str(ac, nums, a);
	return (a);
}
/*
int	check_str(int ac, char **av, t_data *a)
{
	if (ac == 2)
		return (single_str(av[1], a, ac));
	if (ac > 2)
		return (multi_str(ac, av, a));
	return (0);
}
*/

t_data	*init_lst(int ac, char **av)
{
	int		i;
	t_data	*a;
	t_data	*tmp;

	i = 1;
	a = create_node('a');
	tmp = a;
	if (ac < 2)
		return (single_str(av[1], a, ac));
	while (i < ac)
	{
	//	if (check_valid(av[i]))
	//		return (NULL);
		tmp->next = create_node(push_atoi(av[i]));
		tmp = tmp->next;
		i++;
	}
	return (a);
}
