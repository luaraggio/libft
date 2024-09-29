/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:27:52 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:56 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*#include <locale.h>
#include <stdio.h>
#include <stdlib.h>*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	digit;

	printf("Digite um dígito entre 0 e 9: \n");
	scanf("%d", &digit);
	printf("%d", ft_isdigit(digit));
}*/
