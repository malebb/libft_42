/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:43:04 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:43:06 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*last_elem;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = 0;
	}
	else
	{
		last_elem = ft_lstlast(*alst);
		last_elem->next = new;
		new->next = 0;
	}
}
