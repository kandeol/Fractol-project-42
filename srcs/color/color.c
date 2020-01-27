/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kandeol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:03:03 by kandeol           #+#    #+#             */
/*   Updated: 2018/05/16 18:11:39 by kandeol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		get_color_1(t_fractol *data)
{
	data->tab_color[0] = 52;
	data->tab_color[1] = 5;
	data->tab_color[2] = 52;
	return (0);
}

int		get_color_2(t_fractol *data)
{
	data->tab_color[0] = 5;
	data->tab_color[1] = 5;
	data->tab_color[2] = 52;
	return (0);
}

int		get_color_3(t_fractol *data)
{
	data->tab_color[0] = 5;
	data->tab_color[1] = 52;
	data->tab_color[2] = 5;
	return (0);
}

int		get_color_4(t_fractol *data)
{
	data->tab_color[0] = 52;
	data->tab_color[1] = 52;
	data->tab_color[2] = 28;
	return (0);
}

int		put_color(t_fractol *data)
{
	get_color_8(data);
	return (0);
}
