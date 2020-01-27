/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 20:51:08 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 20:00:24 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	trans_xr(t_mlx *mlx)
{
	mlx->frac.x += 5 / mlx->frac.zoom * 1.5;
	ft_draw_fractal(mlx);
}

void	trans_xl(t_mlx *mlx)
{
	mlx->frac.x -= 5 / mlx->frac.zoom * 1.5;
	ft_draw_fractal(mlx);
}

void	trans_xu(t_mlx *mlx)
{
	mlx->frac.y -= 5 / mlx->frac.zoom * 1.5;
	ft_draw_fractal(mlx);
}

void	trans_xd(t_mlx *mlx)
{
	mlx->frac.y += 5 / mlx->frac.zoom * 1.5;
	ft_draw_fractal(mlx);
}
