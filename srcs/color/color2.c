/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 16:03:36 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/15 17:48:35 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		get_color_5(t_fractol *data)
{
	data->tab_color[0] = 0;
	data->tab_color[1] = 5;
	data->tab_color[2] = 0;
	return (0);
}

int		get_color_6(t_fractol *data)
{
	data->tab_color[0] = 5;
	data->tab_color[1] = 5;
	data->tab_color[2] = 0;
	return (0);
}

int		get_color_7(t_fractol *data)
{
	data->tab_color[0] = 5;
	data->tab_color[1] = 0;
	data->tab_color[2] = 5;
	return (0);
}

int		get_color_8(t_fractol *data)
{
	data->tab_color[0] = 0;
	data->tab_color[1] = 5;
	data->tab_color[2] = 255;
	return (0);
}
