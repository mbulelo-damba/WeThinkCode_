/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnjikho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 07:47:26 by rnjikho           #+#    #+#             */
/*   Updated: 2017/08/09 07:47:38 by rnjikho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;
