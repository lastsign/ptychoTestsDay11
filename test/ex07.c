/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:43:29 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 16:14:26 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_push_front(t_list **begin_list, void *data);

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
	t_list *tmp = ft_list_at(h, 5);
	printf("%d ", *((int *) tmp->data));
	return (0);
}
