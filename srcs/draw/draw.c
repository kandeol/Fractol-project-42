/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:13:17 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/15 17:27:19 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			ft_init_mandelbrot(t_fractol *data)
{
	data->x = 0;
	data->y = 0;
	data->zoom = 400;
	data->iter_max = 150;
}

static void		ft_init_draw_core(t_fractol *data)
{
	data->c_i = (data->y1 - WIN_WIDTH / 2) / data->zoom + data->y;
	data->z_r = 0;
	data->z_i = 0;
	data->iter = 0;
	data->z_rsqr = data->z_r * data->z_r;
	data->z_isqr = data->z_i * data->z_i;
}

static void		ft_draw_core(t_mlx *mlx, t_fractol *data, t_color_rgb mc1)
{
	ft_init_draw_core(data);
	while (((data->z_rsqr + data->z_isqr) < 4) && (data->iter < data->iter_max))
	{
		data->z_i = (data->z_i + data->z_i) * data->z_r + data->c_i;
		data->z_r = data->z_rsqr - data->z_isqr + data->c_r;
		data->z_rsqr = data->z_r * data->z_r;
		data->z_isqr = data->z_i * data->z_i;
		data->iter++;
	}
	if (data->iter == data->iter_max)
		mlx->img.data[data->y1 * (WIN_WIDTH) + data->x1] = 0x000000;
	else
	{
		mc1.canal.b = (data->iter * data->tab_color[0]);
		mc1.canal.g = (data->iter * data->tab_color[1]);
		mc1.canal.r = (data->iter * data->tab_color[2]);
		mlx->img.data[data->y1 * (WIN_WIDTH) + data->x1] = mc1.hex;
	}
}

int				ft_draw(t_mlx *mlx, t_fractol *data)
{
	t_color_rgb mc1;

	mc1.hex = 0xFFFFFF;
	data->x1 = -1;
	while (++data->x1 < WIN_WIDTH)
	{
		data->c_r = (data->x1 - WIN_WIDTH / 1.35) / mlx->frac.zoom
			+ mlx->frac.x;
		data->y1 = -1;
		while (++data->y1 < WIN_WIDTH)
		{
			if ((data->y1 < WIN_WIDTH) && (data->y1 > 0)
					&& (data->x1 < WIN_WIDTH) && (data->x1 > 0))
				ft_draw_core(mlx, data, mc1);
		}
	}
	return (0);
}
