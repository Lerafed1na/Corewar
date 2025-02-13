/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:51:12 by wned              #+#    #+#             */
/*   Updated: 2019/11/26 17:34:28 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int		empty(char *s, size_t n)
{
	while (n > 0)
	{
		if (*s != '\t' && *s != ' ')
			return (0);
		s++;
		n--;
	}
	return (1);
}

void	skip_emptyness(char **p)
{
	while (**p == ' ' || **p == '\t')
	{
		(*p)++;
	}
}

void	del_marks(t_mark *me)
{
	t_mark	*tmp;

	while (me)
	{
		tmp = me;
		me = me->next;
		free(tmp->mark);
		free(tmp);
	}
}

void	del_output(t_out **out)
{
	free((*out)->code);
	free(*out);
	*out = NULL;
}

void	del_tokens(t_tokens *me)
{
	t_tokens	*tmp;

	while (me)
	{
		tmp = me->next;
		free(me->mark);
		free(me->a1);
		free(me->a2);
		free(me->a3);
		free(me);
		me = tmp;
	}
}
