/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:40:18 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:25:04 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (len)
	{
		--len;
		new[len] = s[start + len];
	}
	return (new);
}
