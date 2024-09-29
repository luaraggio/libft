/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:10:14 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 01:10:48 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
/*

Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’.  The variable
’next’ is initialized to NULL.

*/
t_list  *ft_lstnew(void *content)
{
    t_list  *node;
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
