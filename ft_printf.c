/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:25:07 by marvin            #+#    #+#             */
/*   Updated: 2025/05/05 20:25:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handleformats(char format, va_list *args)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count = ft_putnbr(va_arg(*args, int));
	else if (format == 'c')
		count = ft_putchar((char)va_arg(*args, int));
	else if (format == 's')
		count = ft_putstr(va_arg(*args, char *));
	else if (format == '%')
		count = ft_putchar('%');
	else if (format == 'u')
		count = ft_putunsignednbr(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		count = ft_dec_tohexa(va_arg(*args, unsigned), format);
	else if (format == 'p')
		count = ft_dec_tohexa_p(va_arg(*args, void *));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += handleformats(*s, &ap);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(ap);
	return (count);
}
