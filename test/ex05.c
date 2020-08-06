/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 18:34:46 by ptycho            #+#    #+#             */
/*   Updated: 2020/08/04 19:41:52 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

int		main(void)
{
	char *rae[] = {"123", "fdsf", "hello", "make"};

	t_list *tmp = ft_list_push_params(4, rae);
	while (tmp)
	{
		printf("%s ", ((char*) tmp->data));
		tmp = tmp->next;
	}
	return (0);
}
