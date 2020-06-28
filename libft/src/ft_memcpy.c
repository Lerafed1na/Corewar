/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:08:46 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:26:46 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*new;
	unsigned char	*frm;

	new = (unsigned char*)dst;
	frm = (unsigned char*)src;
	while (n-- > 0)
		*(new++) = *(frm++);
	return (dst);
}
