/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:47:30 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 18:04:54 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	int n = 21;
	void *data = &n;
	t_list *tmp = ft_create_elem(data);
	int m = 42;
	void *data1 = &m;
	t_list **head = &tmp;
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	t_list* temp = NULL;
	t_list *t = ft_list_last(temp);
	printf("%d\n", *((int*) t->data));
	//while (tmp)
	//{
	//	printf(" %d", *((int*) tmp->data));
	//	tmp = tmp->next;
	//}
	return (0);
}
