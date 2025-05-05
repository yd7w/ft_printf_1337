/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:06:30 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 19:06:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_tohexa(unsigned long n, char c)
{
	char	*og_hexa;
	int		count;

	count = 0;
	if (c == 'x')
		og_hexa_hexa = "0123456789abcdef";
	else if (c == 'X')
		og_hexa = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_dec_tohexa((n / 16), c);
	count += ft_putchar(og_hexa[n % 16]);
	return (count);
}

int	ft_dec_tohexa_p(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (ft_putstr("(null)"));
	count += ft_putstr("0x");
	count += ft_dec_tohexa((unsigned long)p, 'x');
	return (count);
}
