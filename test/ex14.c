/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 22:29:29 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 23:22:30 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_sort(t_list **begin_list1, int (*cmp)());
void	ft_list_push_front(t_list **begin_list, void *data);

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
	t_list **head;
	head = &h;
	int m1 = 11;
	void *data1 = &m1;
	ft_list_push_front(head, data1);
	int m2 = 12;
	void *data2 = &m2;
	ft_list_push_front(head, data2);
	int m3 = 13;
	void *data3 = &m3;
	ft_list_push_front(head, data3);
	ft_list_sort(head, &ft_strcmp);
	h = *head;
	while (h)
	{
		printf("%d ", *((int*) h->data));
		h = h->next;
	}
	return (0);
}
