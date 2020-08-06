/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:52:11 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/05 16:01:45 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);
t_list *ft_list_push_front(t_list **begin_list, void *data);
void ft_list_reverse(t_list **begin_list);

int		main(void)
{
	t_list *tmp = NULL;
	t_list **head = &tmp;
	ft_list_reverse(head);
	t_list *temp = *head;
	while (temp != NULL)
	{
		printf("%d ", *((int*) temp->data));
		temp = temp->next;
	}
	return (0);
}
