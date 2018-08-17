/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tcol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 07:54:34 by ibarabas          #+#    #+#             */
/*   Updated: 2018/05/21 07:54:42 by ibarabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

t_color	tcol(int r, int g, int b, int a)
{
	t_color	col;

	col.r = r;
	col.g = g;
	col.b = b;
	col.a = a;
	return (col);
}
