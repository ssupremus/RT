/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 07:54:48 by ibarabas          #+#    #+#             */
/*   Updated: 2018/05/21 07:54:57 by ibarabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

t_vec2	vec2(int x, int y)
{
	t_vec2	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}
