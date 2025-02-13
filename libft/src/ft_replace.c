/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 20:53:47 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:26:06 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_replace(char **s, char ts, char on)
{
	while (**s)
	{
		if (**s == ts)
			**s = on;
		(*s)++;
	}
}
