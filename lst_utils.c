/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:35:02 by jting             #+#    #+#             */
/*   Updated: 2022/05/13 15:53:43 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	ft_isnumerical(char c)
{
	if (c == '-')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	valid_int(int n)
{
	if (n > 214783647)
		return (0);
	if (n < -2147483648)
		return (0);
	return (1);
}

long int	push_atoi(char *s)
{
	int			i;
	long int	result;
	int			sign;

	i = 1;
	result = 0;
	sign = 1;
	if (s[0] == '-')
		sign *= -1;
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int	check_valid(char **s, t_data *a)
{
	int	i;

	i = 0;
	while (s[1][i])
	{
		if (ft_isspace(s[1][i]))
			return (single_str(s[1], a));
	}
	return (multi_str(s, a));
}
*/