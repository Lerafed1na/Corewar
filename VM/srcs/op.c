/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <elchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/04 11:43:01 by elchrist          #+#    #+#             */
/*   Updated: 2019/11/16 20:08:53 by elchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"
#include "op.h"
#include <stdlib.h>

char		g_names_tab[MAX_PLAYERS + 1][PROG_NAME_LENGTH + 4] = {{0}};

const char	g_error_tab[ERR_NUM + 1][MAX_ERR_LENGTH + 1] =
{
	"",
	"Usage: > ./corewar [-dump nbr_cycles] [[-n number] champion1.cor ...]",
	"Something wrong with champs!",
	"Too many champs!",
	"Use -n correctly!",
	"Dump error!",
	"Error open file",
	"Error index champion",
	"Error magic header",
	"Error content champ",
	"Error size body"
};

t_op_func	g_func_tab[17] =
{
	NULL,
	&live_func,
	&load_func,
	&store_func,
	&add_func,
	&sub_func,
	&and_func,
	&or_func,
	&xor_func,
	&zjmp_func,
	&ldi_func,
	&sti_func,
	&fork_func,
	&lld_func,
	&lldi_func,
	&lfork_func,
	&aff_func
};

t_op		g_op_tab[17] =
{
	{0, 0, {0}, 0, 0, 0, 0, 0},
	{"live", 1, {T_DIR}, 1, 10, "alive", 0, 4},
	{"ld", 2, {T_DIR | T_IND, T_REG}, 2, 5, "load", 1, 4},
	{"st", 2, {T_REG, T_IND | T_REG}, 3, 5, "store", 1, 4},
	{"add", 3, {T_REG, T_REG, T_REG}, 4, 10, "addition", 1, 4},
	{"sub", 3, {T_REG, T_REG, T_REG}, 5, 10, "soustraction", 1, 4},
	{"and", 3, {T_REG | T_DIR | T_IND, T_REG | T_IND | T_DIR, T_REG}, 6, 6,
		"et (and  r1, r2, r3   r1&r2 -> r3", 1, 4},
	{"or", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 7, 6,
		"ou  (or   r1, r2, r3   r1 | r2 -> r3", 1, 4},
	{"xor", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 8, 6,
		"ou (xor  r1, r2, r3   r1^r2 -> r3", 1, 4},
	{"zjmp", 1, {T_DIR}, 9, 20, "jump if zero", 0, 2},
	{"ldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 10, 25,
		"load index", 1, 2},
	{"sti", 3, {T_REG, T_REG | T_DIR | T_IND, T_DIR | T_REG}, 11, 25,
		"store index", 1, 2},
	{"fork", 1, {T_DIR}, 12, 800, "fork", 0, 2},
	{"lld", 2, {T_DIR | T_IND, T_REG}, 13, 10, "long load", 1, 4},
	{"lldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 14, 50,
		"long load index", 1, 2},
	{"lfork", 1, {T_DIR}, 15, 1000, "long fork", 0, 2},
	{"aff", 1, {T_REG}, 16, 2, "aff", 1, 4}
};
