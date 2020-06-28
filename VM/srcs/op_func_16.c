/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_func_16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 02:21:38 by elchrist          #+#    #+#             */
/*   Updated: 2019/10/15 20:10:37 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void			aff_func(t_rules *rules,
				t_champion *cursor, unsigned char *t_args)
{
	int	arg1;

	arg1 = get_arg(rules, cursor, t_args, 0);
	ft_putchar((char)cursor->reg[arg1]);
}
