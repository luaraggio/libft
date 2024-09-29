/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:40:35 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:24:29 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	printf("%c", ft_tolower(c));
}*/
