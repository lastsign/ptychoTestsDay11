/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 15:03:54 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 15:17:18 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int		main(void)
{
	int n;
	void *data;
	t_list *temp;

	n = 10;
	data = &n;
	temp = ft_create_elem(data);
	printf("%d", *(int*) temp->data);
	return (0);
}
