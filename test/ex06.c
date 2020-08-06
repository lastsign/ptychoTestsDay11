/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:08:49 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 17:27:02 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list **begin_list);
int		main(void)
{
	int n = 10;
	void *data = &n;
	t_list *tmp = ft_create_elem(data);
	t_list **head = &tmp;
	int m = 42;
	void *data1 = &m;
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	ft_list_push_front(head, data1);
	tmp = *head;
	while (tmp)
	{
		printf("%d", *((int*) tmp->data));
		tmp = tmp->next;
	}
	tmp = *head;
	ft_list_clear(head);
	while (tmp)
	{
		printf("%d", *((int*) tmp->data));
		tmp = tmp->next;		
	}
}
