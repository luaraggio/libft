/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:21:50 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:49 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um digito ou uma letra: \n");
	scanf("%c", &c);
	printf("%d", ft_isalnum(c));
}*/
