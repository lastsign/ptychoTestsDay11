/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:12:38 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 16:42:57 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*));
void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_print_list(void *data)
{
	printf("%d ", *((int*) data));
}

int		main(void)
{
	int n = 10;
	void *data = &n;
	t_list *h = ft_create_elem(data);
	int m = 42;
	void *data1 = &m;
	t_list **head = &h;
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	h = *head;
	ft_list_foreach(h, &ft_print_list);
	return (0);
}
