/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:51:58 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 18:32:16 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		zoom_in(t_mlx *mlx, int x, int y)
{
	mlx->frac.zoom *= 1.5;
	if (mlx->frac.type == 1)
	{
		mlx->frac.x += (x - WIN_WIDTH / 1.35) / mlx->frac.zoom * 0.5;
		mlx->frac.y += (y - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
	}
	if (mlx->frac.type == 2)
	{
		mlx->frac.x += (x - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
		mlx->frac.y += (y - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
	}
	if (mlx->frac.type == 3)
	{
		mlx->frac.x += (x - WIN_WIDTH / 1.7) / mlx->frac.zoom * 0.5;
		mlx->frac.y += (y - WIN_WIDTH / 1.7) / mlx->frac.zoom * 0.5;
	}
	ft_draw_fractal(mlx);
}

void		zoom_out(t_mlx *mlx, int x, int y)
{
	if (mlx->frac.zoom > 300)
	{
		mlx->frac.zoom *= 0.5;
		if (mlx->frac.type == 1)
		{
			mlx->frac.x -= (x - WIN_WIDTH / 1.35) / mlx->frac.zoom * 0.5;
			mlx->frac.y -= (y - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
		}
		if (mlx->frac.type == 2)
		{
			mlx->frac.x -= (x - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
			mlx->frac.y -= (y - WIN_WIDTH / 2) / mlx->frac.zoom * 0.5;
		}
		if (mlx->frac.type == 3)
		{
			mlx->frac.x -= (x - WIN_WIDTH / 1.7) / mlx->frac.zoom * 0.5;
			mlx->frac.y -= (y - WIN_WIDTH / 1.7) / mlx->frac.zoom * 0.5;
		}
	}
	ft_draw_fractal(mlx);
}
