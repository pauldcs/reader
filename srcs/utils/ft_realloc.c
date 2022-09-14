/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:17:28 by pducos            #+#    #+#             */
/*   Updated: 2022/09/14 23:47:20 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line_reader.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

bool    ft_realloc(void **buf, size_t *cap, size_t len, size_t new_cap)
{
   void    *new_buf;

    if (!ft_alloc(&new_buf, new_cap))
        return (false);
    ft_memcpy(new_buf, *buf, len);
    free(*buf);
    *buf = new_buf;
    *cap = new_cap;
    return (true);
}
