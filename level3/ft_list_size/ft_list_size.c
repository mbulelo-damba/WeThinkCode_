/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:23:12 by mdamba            #+#    #+#             */
/*   Updated: 2018/01/28 15:23:18 by mdamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
    if(begin_list == NULL)
        return(0);
    else
        return(1 + ft_list_size(begin_list -> next));
}
