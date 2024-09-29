/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:40:25 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_pointer(void *pointer)
{
	int				i;
	char			*p;
	unsigned long	pt;

	pt = (unsigned long) pointer;
	if (pt == 0)
		return (ft_print_string("(nil)"));
	i = 0;
	p = ft_utoa_base(pt, 16, "0123456789abcdef");
	i += ft_print_string("0x");
	i += ft_print_string(p);
	free (p);
	return (i);
}
