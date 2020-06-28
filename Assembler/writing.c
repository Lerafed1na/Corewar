/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:16:35 by wned              #+#    #+#             */
/*   Updated: 2019/11/30 17:15:56 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	write_magic(t_out *out)
{
	char	*lol;
	int		value;
	int		i;
	int		j;

	i = -1;
	j = 4;
	value = COREWAR_EXEC_MAGIC;
	lol = (char*)&value;
	while (++i < 4)
		out->head[--j] = *(lol + i);
}

void	del_3_str(char **s1, char **s2, char **s3)
{
	if (s1)
		ft_strdel(s1);
	if (s2)
		ft_strdel(s2);
	if (s3)
		ft_strdel(s3);
}
