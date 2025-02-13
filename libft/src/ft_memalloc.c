/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:18:30 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:27:08 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*new;

	new = (unsigned char*)malloc(size * sizeof(unsigned char));
	if (!new)
		return (NULL);
	while (size-- > 0)
		new[size] = 0;
	return (new);
}
