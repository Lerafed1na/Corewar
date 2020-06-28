/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:42:46 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:26:03 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_tup(char *b)
{
	while (*b)
	{
		if (ft_isalpha(*b))
			*b = ft_toupper(*b);
		++b;
	}
}
