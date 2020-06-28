/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:55:59 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:25:00 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i != 0 && s[i] != c)
		i--;
	if (i > 0)
		return ((char *)(s + i));
	else if (s[i] == c)
		return ((char*)s);
	else
		return (NULL);
}
