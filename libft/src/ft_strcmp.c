/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:36:05 by wned              #+#    #+#             */
/*   Updated: 2019/05/27 15:25:53 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*i;
	unsigned char	*j;

	i = (unsigned char*)s1;
	j = (unsigned char*)s2;
	while (*i && *j && *i == *j)
	{
		j++;
		i++;
	}
	return (*i - *j);
}
