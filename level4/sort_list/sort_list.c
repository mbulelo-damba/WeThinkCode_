/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:13:56 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/10 12:20:22 by rnjikho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int		overflow;
    t_list	*tmp;
    
    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            overflow = lst->data;
            lst->data = lst->next->data;
            lst->next->data = overflow;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}
