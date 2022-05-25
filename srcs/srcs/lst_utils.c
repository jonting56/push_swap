/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:35:02 by jting             #+#    #+#             */
/*   Updated: 2022/05/18 12:54:05 by jting            ###   ########.fr       */
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

int	valid_int(long int n)
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
	long int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		result *= 10;
		result = result + s[i] - '0';
		i++;
	}
	return (result * sign);
}

int	check_valid(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' && ft_isnumerical(s[i + 1]))
		return (1);
	if (valid_int(push_atoi(s)))
		return (1);
	return (0);
}