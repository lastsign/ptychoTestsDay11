/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:19:18 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 15:55:35 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	int n = 10;
	void *data = &n;
	t_list *head = NULL;
	t_list **tmp;
	tmp = &head;
	int m = 12;
	data = &m;
	ft_list_push_back(tmp, data);
	while (head)
	{
		printf("%d\n", *((int*) head->data));
		head = head->next;
	}
	return (0);
}
