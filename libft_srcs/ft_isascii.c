/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:22:10 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:54 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;
	printf("Digite um caractere para verificar se pertence a tabela ascii:  \n");
	scanf("%d", &c);
	printf("%d",ft_isascii(c));
}*/
