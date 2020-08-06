/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:40:30 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 17:05:44 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*), void *data_ref, int (*cmp)(void *, void*));
void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_print_list(void *data)
{
	printf("%d ", *((int*) data));
}

int		ft_strcmp(void *s1, void *s2)
{
	int d1 = *((int*) s1);
	int d2 = *((int*) s2);
	if (d1 == d2)
		return (0);
	return (1);
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
	int a = 42;
	void *ref = &a;
	ft_list_foreach_if(h, &ft_print_list, ref, &ft_strcmp);
	return (0);
}
