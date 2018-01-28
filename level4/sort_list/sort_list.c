/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:54:58 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:55:01 by mdamba           ###   ########.fr       */
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
