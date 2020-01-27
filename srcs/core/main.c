/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:55:10 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 18:13:01 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void					init_fractol(t_fractol *data)
{
	if (data->type == 1)
		ft_init_mandelbrot(data);
	if (data->type == 2)
		ft_init_julia(data);
	if (data->type == 3)
		ft_init_burning(data);
}

int						fractol_cmp(t_fractol *data, char *av)
{
	if (!ft_strcmp(av, "mandelbrot"))
		data->type = 1;
	else if (!ft_strcmp(av, "julia"))
		data->type = 2;
	else if (!ft_strcmp(av, "burning"))
		data->type = 3;
	else
	{
		ft_putstr(" Usage: ./fractol [mandelbrot/julia/burning]\n");
		return (1);
	}
	return (0);
}

void					fractol_type(t_fractol *data, t_mlx *mlx)
{
	if (data->type == 1)
		ft_draw(mlx, &mlx->frac);
	if (data->type == 2)
		ft_draw_julia(mlx, &mlx->frac);
	if (data->type == 3)
		ft_draw_burning_ship(mlx, &mlx->frac);
}

static void				main_hook(t_mlx *mlx)
{
	mlx_hook(mlx->win_ptr, 2, 0, deal_key, mlx);
	mlx_hook(mlx->win_ptr, 4, 2, deal_key_mouse, mlx);
	mlx_hook(mlx->win_ptr, 5, 3, deal_key_mouse_2, mlx);
	mlx_hook(mlx->win_ptr, 6, 6, deal_mouse_motion, mlx);
	mlx_loop(mlx->mlx_ptr);
}

int						main(int ac, char **av)
{
	t_mlx		mlx;

	if (ac != 2)
	{
		ft_putstr(" Usage: ./fractol [mandelbrot/julia/burning]\n");
		return (0);
	}
	if (fractol_cmp(&mlx.frac, av[1]))
		return (0);
	init_fractol(&mlx.frac);
	if ((mlx.mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if ((mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1080, 1080, "fractol"))
			== NULL)
		return (EXIT_FAILURE);
	mlx.img.img_ptr = mlx_new_image(mlx.mlx_ptr, WIN_WIDTH, WIN_WIDTH);
	mlx.img.data = (int*)mlx_get_data_addr(mlx.img.img_ptr, &(mlx.img.bpp),
			&(mlx.img.size_line), &mlx.img.endian);
	put_color(&mlx.frac);
	ft_draw_fractal(&mlx);
	main_hook(&mlx);
}
