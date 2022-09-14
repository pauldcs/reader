/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:16:30 by pducos            #+#    #+#             */
/*   Updated: 2022/09/14 18:45:45 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_x.h"
#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>

bool	reader_init(t_reader *r, int fd)
{
	r->fd = fd;
	if (read(r->fd, 0, 0) != -1)
	{
		r->eof = false;
		r->sv.str = NULL;
		r->sv.len = 0;
		r->checked = 0;
		r->cap = 0;
		return (true);
	}
	write(STDERR_FILENO, "init_reader error\n", 18);
	return (false);
}
