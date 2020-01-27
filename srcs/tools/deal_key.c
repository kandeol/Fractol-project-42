/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 18:47:35 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 18:11:40 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			deal_key_color(int key, t_mlx *mlx)
{
	if (key == COLOR1)
		get_color_1(&mlx->frac);
	if (key == COLOR2)
		get_color_2(&mlx->frac);
	if (key == COLOR3)
		get_color_3(&mlx->frac);
	if (key == COLOR4)
		get_color_4(&mlx->frac);
	if (key == COLOR5)
		get_color_5(&mlx->frac);
	if (key == COLOR6)
		get_color_6(&mlx->frac);
	if (key == COLOR7)
		get_color_7(&mlx->frac);
	if (key == COLOR8)
		get_color_8(&mlx->frac);
	ft_draw_fractal(mlx);
	return (0);
}

int			deal_key(int key, t_mlx *mlx)
{
	if (key == RESET)
	{
		init_fractol(&mlx->frac);
		ft_draw_fractal(mlx);
	}
	if (key == ESCAPE)
		exit(EXIT_SUCCESS);
	if (key == MOVE)
		on_off_julia(&mlx->frac);
	if (key == UP_ITER || key == DW_ITER)
		up_dw_iter(mlx, key);
	if (key == RIGHT)
		trans_xr(mlx);
	if (key == LEFT)
		trans_xl(mlx);
	if (key == UP)
		trans_xu(mlx);
	if (key == DOWN)
		trans_xd(mlx);
	if (key >= 18 && key <= 28)
		deal_key_color(key, mlx);
	return (0);
}

int			deal_key_mouse(int button, int x, int y, t_mlx *mlx)
{
	if (button == 1)
	{
		mlx->frac.d_flag = 1;
		mlx->frac.t_x = x;
		mlx->frac.t_y = y;
	}
	if (button == 4)
		zoom_in(mlx, x, y);
	if (button == 5)
		zoom_out(mlx, x, y);
	return (0);
}

int			deal_key_mouse_2(int button, int x, int y, t_mlx *mlx)
{
	if (button == 1)
	{
		mlx->frac.d_flag = 0;
		mlx->frac.t_x = x;
		mlx->frac.t_y = y;
	}
	return (0);
}

int			deal_mouse_motion(int x, int y, t_mlx *mlx)
{
	if (mlx->frac.f_julia == 1 && mlx->frac.d_flag == 0)
		mouse_julia(mlx, x, y, &mlx->frac);
	if (mlx->frac.d_flag == 1)
	{
		mlx->frac.d_x = x - mlx->frac.t_x;
		mlx->frac.d_y = y - mlx->frac.t_y;
		mlx->frac.t_x = x;
		mlx->frac.t_y = y;
		drag_n_drop(mlx);
	}
	return (0);
}
