/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 02:19:41 by vimercie          #+#    #+#             */
/*   Updated: 2022/01/25 02:34:14 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    if_p(va_list ap, int *len)
{
    unsigned long long int p;

    p = va_arg(ap, unsigned long long int);
    if (p == 0)
        return (ft_putstr_fd("(nil)", 1, len));
    ft_putstr_fd("0x", 1, len);
	return (ft_putnbr_hex(p, "0123456789abcdef", len));
}
