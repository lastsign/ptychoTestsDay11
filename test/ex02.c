/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:54:19 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 17:10:00 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	int n = 10;
	void *data;
	data = &n;

	t_list *tmp = NULL;
	int m = 42;
	void *data1;
	data1 = &m;
	t_list **head = &tmp;
	ft_list_push_front(head, data1);
	while (tmp)
	{
		printf("%d\n", *((int*) tmp->data));
		tmp = tmp->next;
	}
	return (0);
}
