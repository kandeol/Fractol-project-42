/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 19:08:27 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 18:37:09 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mouse_julia(t_mlx *mlx, int x, int y, t_fractol *data)
{
	data->c_r = (x * 2) - WIN_WIDTH;
	data->c_i = (y * 2) - WIN_WIDTH;
	ft_draw_fractal(mlx);
}

void	drag_n_drop(t_mlx *mlx)
{
	mlx->frac.x -= mlx->frac.d_x / mlx->frac.zoom;
	mlx->frac.y -= mlx->frac.d_y / mlx->frac.zoom;
	ft_draw_fractal(mlx);
}

void	on_off_julia(t_fractol *data)
{
	if (data->f_julia == 0)
		data->f_julia = 1;
	else
		data->f_julia = 0;
}

void	up_dw_iter(t_mlx *mlx, int key)
{
	if (key == UP_ITER)
	{
		if (mlx->frac.iter_max < 300)
			mlx->frac.iter_max += 5;
	}
	else
	{
		if (mlx->frac.iter_max > 50)
			mlx->frac.iter_max -= 5;
	}
	ft_draw_fractal(mlx);
}
