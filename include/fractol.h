/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:00:10 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/17 19:39:30 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include "../minilibx_macos/mlx.h"
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# define WIN_WIDTH 1080
# define ESCAPE 53
# define MOVE 83
# define RESET 15
# define RIGHT 124
# define LEFT 123
# define UP 126
# define DOWN 125
# define UP_ITER 69
# define DW_ITER 78
# define COLOR1 18
# define COLOR2 19
# define COLOR3 20
# define COLOR4 21
# define COLOR5 23
# define COLOR6 22
# define COLOR7 26
# define COLOR8 28

typedef struct	s_fractol
{
	int			type;
	double		zoom;
	int			iter;
	int			iter_max;
	int			x1;
	int			y1;
	double		x;
	double		y;
	double		t_x;
	double		t_y;
	double		n_x;
	double		n_y;
	double		d_x;
	double		d_y;
	double		c_r;
	double		c_i;
	double		z_r;
	double		z_i;
	double		z_rsqr;
	double		z_isqr;
	double		x_min;
	double		x_max;
	double		y_min;
	double		y_max;
	double		tmp;
	char		*itmp;
	int			f_julia;
	int			d_flag;
	int			tab_color[3];
}				t_fractol;

typedef	struct	s_img
{
	void		*img_ptr;
	int			*data;
	int			bpp;
	int			size_line;
	int			endian;
}				t_img;

typedef struct	s_mlx
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_img		img;
	t_fractol	frac;
}				t_mlx;

typedef struct	s_canal
{
	unsigned char b;
	unsigned char g;
	unsigned char r;
	unsigned char a;
}				t_canal;

typedef union	u_color_rgb
{
	unsigned int	hex;
	t_canal			canal;
}				t_color_rgb;

void			ft_draw_fractal(t_mlx *mlx);
int				ft_draw(t_mlx *mlx, t_fractol *data);
int				ft_draw_julia(t_mlx *mlx, t_fractol *data);
int				ft_draw_burning_ship(t_mlx *mlx, t_fractol *data);
void			ft_init_mandelbrot(t_fractol *data);
void			ft_init_julia(t_fractol *data);
void			ft_init_burning(t_fractol *data);
void			zoom_in(t_mlx *mlx, int x, int y);
void			zoom_out(t_mlx *mlx, int x, int y);
void			init_julia(t_fractol *data);
void			mouse_julia(t_mlx *mlx, int x, int y, t_fractol *data);
void			fractol_type(t_fractol *data, t_mlx *mlx);
void			trans_xr(t_mlx *mlx);
void			trans_xl(t_mlx *mlx);
void			trans_xu(t_mlx *mlx);
void			trans_xd(t_mlx *mlx);
int				get_color_1(t_fractol *data);
int				get_color_2(t_fractol *data);
int				get_color_3(t_fractol *data);
int				get_color_4(t_fractol *data);
int				get_color_5(t_fractol *data);
int				get_color_6(t_fractol *data);
int				get_color_7(t_fractol *data);
int				get_color_8(t_fractol *data);
int				put_color(t_fractol *data);
int				deal_key_color(int key, t_mlx *mlx);
int				deal_key(int key, t_mlx *mlx);
int				deal_key_mouse(int button, int x, int y, t_mlx *mlx);
int				deal_key_mouse_2(int button, int x, int y, t_mlx *mlx);
int				deal_mouse_motion(int x, int y, t_mlx *mlx);
void			on_off_julia(t_fractol *data);
void			init_fractol(t_fractol *data);
void			fractol_type(t_fractol *data, t_mlx *mlx);
void			drag_n_drop(t_mlx *mlx);
void			up_dw_iter(t_mlx *mlxi, int key);

#endif
