/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:58:30 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:25:50 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*new;
	char	*frm;

	new = dst;
	frm = (char *)src;
	while (*frm)
		*(new++) = *(frm++);
	*new = '\0';
	return (dst);
}
