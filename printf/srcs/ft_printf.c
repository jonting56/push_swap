/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:17:37 by jting             #+#    #+#             */
/*   Updated: 2022/03/31 12:54:29 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	input;

	i = 0;
	count = 0;
	va_start(input, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			count += check_char(input, s[i + 1]);
			i++;
		}
		else if (s[i] != '%')
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(input);
	return (count);
}

int	check_char(va_list input, const char spec)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar(va_arg(input, int));
	else if (spec == 's')
		count += ft_printstr(va_arg(input, char *));
	else if (spec == 'p')
		count += ft_printptr(va_arg(input, unsigned long long));
	else if (spec == 'd' || spec == 'i')
		count += ft_putnbr(va_arg(input, int));
	else if (spec == 'u')
		count += ft_putunsign(va_arg(input, unsigned int));
	else if (spec == 'x' || spec == 'X')
		count += ft_printhex(va_arg(input, unsigned int), spec);
	else if (spec == '%')
		count += ft_printpercent();
	else
		count += write(1, &spec, 1);
	return (count);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
