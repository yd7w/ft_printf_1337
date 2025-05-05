/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:27:46 by marvin            #+#    #+#             */
/*   Updated: 2025/05/03 19:27:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

int	ft_strlen(const char *str);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_putchar(char c);
int	ft_putunsignednbr(unsigned long n);
int	ft_dec_tohexa(unsigned long n, char c);
int	ft_dec_tohexa_p(void *p);

#endif 