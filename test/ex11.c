/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:05:23 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 18:16:59 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
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
	int a = 11;
	void *ref = &a;
	t_list *find = ft_list_find(h, ref, &ft_strcmp);
	printf("%d ", *((int*) find->data));
	return (0);
}
