/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:51:42 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 19:39:49 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw_fractal(t_mlx *mlx)
{
	char	*tmp;

	fractol_type(&mlx->frac, mlx);
	tmp = ft_itoa(mlx->frac.iter_max);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.img_ptr, 0, 0);
	mlx_string_put(mlx->mlx_ptr, mlx->win_ptr, 140, 20, 0xFFFFFF, tmp);
	mlx_string_put(mlx->mlx_ptr, mlx->win_ptr, 20, 20, 0xFFFFFF, "iteration :");
	free(tmp);
}
