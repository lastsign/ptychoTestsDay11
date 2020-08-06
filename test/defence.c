/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defence.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 10:17:12 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/06 10:26:10 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *t;

	t = NULL;
	t = malloc(sizeof(t_list));
	if (t)
	{
		t->next = NULL;
		t->data = data;
	}
	return (t);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *head;

	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	head = ft_create_elem(data);
	head->next = *begin_list;
	*begin_list = head;
}
