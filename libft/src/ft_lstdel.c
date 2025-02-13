/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:09:48 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:27:31 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*p;

	if (!alst || !*alst || !del)
		return ;
	p = *alst;
	while (p)
	{
		tmp = p;
		ft_lstdelone(&p, del);
		p = tmp->next;
	}
	*alst = NULL;
}
