/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:35:11 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_decimal(int dec)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa_base(dec, 10, "0123456789");
	i += ft_print_string(s);
	free(s);
	return (i);
}
