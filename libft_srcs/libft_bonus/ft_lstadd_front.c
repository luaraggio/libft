/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:09:56 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:10:38 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
Adds the node ’new’ at the beginning of the list.
*/

void    ft_lstadd_front(t_list **lst, t_list *new) //mefodeu
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}
