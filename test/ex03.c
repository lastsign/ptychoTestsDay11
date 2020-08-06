/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:13:55 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 17:24:25 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	int n = 10;
	void *data = &n;
	t_list *tmp = ft_create_elem(data);
	printf("%d\n", ft_list_size(tmp));
	t_list **head = &tmp;
	int m = 42;
	void *data1 = &m;
	ft_list_push_front(head, data1);
	t_list *t = *head;
	printf("%d\n", ft_list_size(t));
	return (0);
}
