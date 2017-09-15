/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 08:02:17 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/09 08:04:56 by rnjikho          ###   ########.fr       */
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
