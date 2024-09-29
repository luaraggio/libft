/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:10:05 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:10:41 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *i;
    void  *tmp;

    if (!(*lst))
        return ;
    i = *lst;
    while(i != NULL)
    {
        tmp = i->content;
        del(i->content);
        free(i);
        i = tmp;
    }
    *lst = NULL;
}
