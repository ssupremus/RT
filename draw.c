/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:18:56 by ibarabas          #+#    #+#             */
/*   Updated: 2018/07/18 09:33:06 by ibarabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

/*
**	Засовывает изображение в окно,
**	не проводя повторные вычисления.
**	Нужно, в основном, для меню.
*/

void	redraw(t_data *d)
{
	mlx_put_image_to_window(d->win.mlx, d->win.win, d->img.id, 0, 0);
	if (d->menu_visible)
		draw_menu(d);
}

/*
**	Проводит повторные вычисления, и только потом
**	засовывает изображение в окно.
*/

void	draw(t_data *d)
{
	iterate_pixels(d);
	mlx_put_image_to_window(d->win.mlx, d->win.win, d->img.id, 0, 0);
	if (d->menu_visible)
		draw_menu(d);
}
