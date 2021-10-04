/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1control_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:23:27 by guilmira          #+#    #+#             */
/*   Updated: 2021/10/04 10:24:00 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/** PURPOSE : from arry dimensions, obtain window pixel size. */
t_vector	get_window_dimensions(t_vector dimensions)
{
	t_vector	window_dimensions;

	window_dimensions.x = dimensions.x * UNIT_WIDTH;
	window_dimensions.y = dimensions.y * UNIT_HEIGHT;
	return (window_dimensions);
}
