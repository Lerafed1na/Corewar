/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <wned@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/05 14:33:27 by elchrist          #+#    #+#             */
/*   Updated: 2019/11/09 20:50:40 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_H
# define OP_H

# define IND_SIZE 2
# define REG_SIZE 4

# define DIR_SIZE REG_SIZE

# define REG_CODE 1
# define DIR_CODE 2
# define IND_CODE 3

# define MAX_ARGS_NUMBER 4
# define MAX_PLAYERS 4
# define MEM_SIZE (4*1024)
# define IDX_MOD (MEM_SIZE / 8)
# define CHAMP_MAX_SIZE (MEM_SIZE / 6)

# define ALT_COMMENT_CHAR ';'
# define COMMENT_CHAR '#'
# define LABEL_CHAR ':'
# define DIRECT_CHAR '%'
# define SEPARATOR_CHAR ','

# define LABEL_CHARS "abcdefghijklmnopqrstuvwxyz_0123456789"

# define NAME_CMD_STRING ".name"
# define COMMENT_CMD_STRING ".comment"

# define REG_NUMBER 16

# define CYCLE_TO_DIE 1536
# define CYCLE_DELTA 50
# define NBR_LIVE 21
# define MAX_CHECKS 10

typedef char	t_arg_type;

# define T_REG 1
# define T_DIR 2
# define T_IND 4
# define T_LAB 8

# define PROG_NAME_LENGTH (128)
# define COMMENT_LENGTH (2048)
# define COREWAR_EXEC_MAGIC	0xea83f3

typedef struct		s_op
{
	unsigned char	cmd[6];
	unsigned char	arg_q;
	unsigned char	arg_type[3];
	unsigned char	opcode;
	unsigned int	cycles;
	unsigned char	descrip[37];
	unsigned char	a_typecode;
	unsigned char	dir_size;
}					t_op;

extern t_op				g_op_tab[17];

#endif
