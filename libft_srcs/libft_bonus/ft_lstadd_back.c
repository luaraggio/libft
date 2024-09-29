/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:09:43 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:10:30 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;
    if (!new || !lst)
        return ;
    if (!(*lst))
        *lst = new;
    tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}
