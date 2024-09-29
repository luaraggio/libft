/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:30:31 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:23:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destt;
	const char	*srcc;

	destt = (char *) dest;
	srcc = (const char *) src;
	if (destt == srcc)
		return (dest);
	else if (destt > srcc)
	{
		while (n--)
			destt[n] = srcc[n];
	}
	else
	{
		while (n--)
			*destt++ = *srcc++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Oi, Tudo bem?";
	char	src[9] = "Luara";
	size_t	n = 2;

	memmove(dest, src, n);
	printf("%s", dest);
}*/
